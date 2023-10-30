#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>


const float FPS = 100;  

const int SCREEN_W = 960;
const int SCREEN_H = 540;
const int NAVE_W = 100;
const int NAVE_H = 50;
const int RAIO_TIRO = 3;
const float ACEL_TIRO = 0.05;

typedef struct Tiro {
	float x, y;
	int ativo;
	int hit;
	float vel_y;
} Tiro;

typedef struct Nave {
	
	float x,y;
	ALLEGRO_COLOR cor;
	int dir;
	float vel;
	Tiro tiro;
	
} Nave;

void desenha_cenario() {
	ALLEGRO_COLOR cor = al_map_rgb(119, 113, 202);
	al_clear_to_color(cor);
}

void desenha_nave(Nave nave) {
	al_draw_filled_triangle(nave.x, nave.y,
							nave.x - (nave.dir*NAVE_W),
							nave.y - NAVE_H/2,
							nave.x - (nave.dir*NAVE_W),
							nave.y + NAVE_H/2,
							nave.cor);
							
							
	//desenha tiro:
	if(nave.tiro.ativo)
		al_draw_filled_circle(nave.tiro.x,
						  nave.tiro.y,
						  RAIO_TIRO, nave.cor);
	
	
}

void atualiza_nave(Nave *nave) {
	nave->x += (nave->dir)*nave->vel;
	if(nave->x > SCREEN_W + NAVE_W ||
	   nave->x < -NAVE_W) {
		nave->dir *= -1;
	
	}
	
	//atualiza tiro
	if(nave->tiro.ativo) {
		nave->tiro.x = nave->x;
		nave->tiro.vel_y += ACEL_TIRO;
		nave->tiro.y += nave->tiro.vel_y;
	}
	
	if(nave->tiro.x < -RAIO_TIRO ||
	   nave->tiro.x > SCREEN_W + RAIO_TIRO ||
	   nave->tiro.y > SCREEN_H + RAIO_TIRO) {
		   nave->tiro.ativo = 0;
	}
	
	
	
}


 
int main(int argc, char **argv){
	
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
	ALLEGRO_TIMER *timer = NULL;
   
	//----------------------- rotinas de inicializacao ---------------------------------------
    
	//inicializa o Allegro
	if(!al_init()) {
		fprintf(stderr, "failed to initialize allegro!\n");
		return -1;
	}
	
    //inicializa o módulo de primitivas do Allegro
    if(!al_init_primitives_addon()){
		fprintf(stderr, "failed to initialize primitives!\n");
        return -1;
    }	
	
	//inicializa o modulo que permite carregar imagens no jogo
	if(!al_init_image_addon()){
		fprintf(stderr, "failed to initialize image module!\n");
		return -1;
	}
   
	//cria um temporizador que incrementa uma unidade a cada 1.0/FPS segundos
    timer = al_create_timer(1.0 / FPS);
    if(!timer) {
		fprintf(stderr, "failed to create timer!\n");
		return -1;
	}
 
	//cria uma tela com dimensoes de SCREEN_W, SCREEN_H pixels
	display = al_create_display(SCREEN_W, SCREEN_H);
	if(!display) {
		fprintf(stderr, "failed to create display!\n");
		al_destroy_timer(timer);
		return -1;
	}

	//instala o teclado
	if(!al_install_keyboard()) {
		fprintf(stderr, "failed to install keyboard!\n");
		return -1;
	}
	

	//inicializa o modulo allegro que carrega as fontes
	al_init_font_addon();

	//inicializa o modulo allegro que entende arquivos tff de fontes
	if(!al_init_ttf_addon()) {
		fprintf(stderr, "failed to load tff font module!\n");
		return -1;
	}
	
	//carrega o arquivo arial.ttf da fonte Arial e define que sera usado o tamanho 32 (segundo parametro)
    ALLEGRO_FONT *size_32 = al_load_font("arial.ttf", 32, 1);   
	if(size_32 == NULL) {
		fprintf(stderr, "font file does not exist or cannot be accessed!\n");
	}

 	//cria a fila de eventos
	event_queue = al_create_event_queue();
	if(!event_queue) {
		fprintf(stderr, "failed to create event_queue!\n");
		al_destroy_display(display);
		return -1;
	}
   


	//registra na fila os eventos de tela (ex: clicar no X na janela)
	al_register_event_source(event_queue, al_get_display_event_source(display));
	//registra na fila os eventos de tempo: quando o tempo altera de t para t+1
	al_register_event_source(event_queue, al_get_timer_event_source(timer));
	//registra na fila os eventos de teclado (ex: pressionar uma tecla)
	al_register_event_source(event_queue, al_get_keyboard_event_source());

	//Criar a Nave 1:
	Nave p1;
	p1.x = -1;
	p1.y = NAVE_H;
	p1.cor = al_map_rgb(255, 0, 0);
	p1.dir = 1;
	p1.vel = 3;
	p1.tiro.x = 0;
	p1.tiro.y = 0;
	p1.tiro.ativo = 0;
	p1.tiro.hit = 0;
	p1.tiro.vel_y = 0;
	
	
	//Criar a Nave 2:
	Nave p2;
	//...






	//inicia o temporizador
	al_start_timer(timer);
	
	int playing = 1;
	while(playing) {
		ALLEGRO_EVENT ev;
		//espera por um evento e o armazena na variavel de evento ev
		al_wait_for_event(event_queue, &ev);

		//se o tipo de evento for um evento do temporizador, ou seja, se o tempo passou de t para t+1
		if(ev.type == ALLEGRO_EVENT_TIMER) {

			desenha_cenario();
			
			
			atualiza_nave(&p1);
			desenha_nave(p1);





			//atualiza a tela (quando houver algo para mostrar)
			al_flip_display();
			
			if(al_get_timer_count(timer)%(int)FPS == 0)
				printf("\n%d segundos se passaram...", (int)(al_get_timer_count(timer)/FPS));
		}
		//se o tipo de evento for o fechamento da tela (clique no x da janela)
		else if(ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
			playing = 0;
		}
		//se o tipo de evento for um pressionar de uma tecla
		else if(ev.type == ALLEGRO_EVENT_KEY_DOWN) {
			
			switch(ev.keyboard.keycode) {
				
				case ALLEGRO_KEY_SPACE:
					p1.tiro.ativo = 1;
					p1.tiro.hit = 0;
					p1.tiro.x = p1.x;
					p1.tiro.y = p1.y;
					p1.tiro.vel_y = 0;
				break;
				
			}
			
			//imprime qual tecla foi
			printf("\ncodigo tecla: %d", ev.keyboard.keycode);
		}

	} //fim do while
     
	//procedimentos de fim de jogo (fecha a tela, limpa a memoria, etc)
	
 
	al_destroy_timer(timer);
	al_destroy_display(display);
	al_destroy_event_queue(event_queue);
   
 
	return 0;
}
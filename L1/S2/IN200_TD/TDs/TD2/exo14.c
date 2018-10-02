#include "graphics.h"

COULEUR T1[256];

void remplir_rouge(){
	int i;
	for(i=0;i<256;i++){
		T1[i]=couleur_RGB(i,0,0);
	}
}

void affiche_horizontal(){
	int i;
	POINT p;
	POINT p1;
	for(i=0;i<256;i++){
		p.x=0;p.y=2*i;
		p1.x=WIDTH;p1.y=p.y+2;
		draw_fill_rectangle(p,p1,T1[i]);
	}
}

int main(){
	init_graphics(512,512);
	remplir_rouge();
	affiche_horizontal();
	
	wait_escape();
	exit(0);
}


#include <stdio.h>
#include <stdlib.h>
#include <allegro5/allegro.h>

int olaallegro(int argc, char **argv) {
	ALLEGRO_DISPLAY *display = NULL;

	if (!al_init()) {
		fprintf(stderr, "Falha ao inicializar o Allegro!\n");
		return EXIT_FAILURE;
	}

	display = al_create_display(640, 480);
	if (!display) {
		fprintf(stderr, "Falha ao criar uma janela!\n");
		return EXIT_FAILURE;
	}

	al_clear_to_color(al_map_rgb(255, 255, 255));
	al_flip_display();
	al_rest(10.0);

	al_destroy_display(display);

	return (EXIT_SUCCESS);
}
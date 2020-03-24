#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"
#include "parser.h"

int main(int argc, char **argv) {

  screen s;
  color c;
  clear_screen(s);
  c.green = 255;
  struct matrix * edges;
  struct matrix * polygons;
  struct matrix * transform;

  edges = new_matrix(4, 4);
  polygons = new_matrix(4, 4);
  transform = new_matrix(4, 4);

  // if ( argc == 2 )
  //   parse_file( argv[1], transform, edges, polygons, s );
  // else
  //   parse_file( "stdin", transform, edges, polygons, s );

  add_polygon(edges,100.0,100.0,0.0, 150.0,150.0,0.0, 200.0,100.0,0.0);
  print_matrix(edges);
  draw_polygons(edges,s,c);
  display(s);

  free_matrix( edges );
  free_matrix( polygons );
  free_matrix( transform );
}

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

  // add_box(polygons,150,200,0,100,100,100);
  // transform = make_rotX(15);
  // edges = make_rotY(15);
  // matrix_mult(edges,transform);
  // matrix_mult(transform,polygons);
  // draw_polygons(polygons,s,c);
  // display(s);

  if ( argc == 2 )
    parse_file( argv[1], transform, edges, polygons, s );
  else
    parse_file( "stdin", transform, edges, polygons, s );


  


  free_matrix( edges );
  free_matrix( polygons );
  free_matrix( transform );
}

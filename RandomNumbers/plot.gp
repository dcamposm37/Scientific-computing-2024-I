set term pdf
set out "random_pdf.pdf"
set object 1 rectangle from screen 0,0 to screen 1,1 fillcolor rgb "#F0F0F0" behind
set grid
set xlabel "x"
set ylabel "Densidad de probabilidad"
set title 'Funciones de densidad de probabilidad para diferentes semillas'
plot 'data1.txt' with points lc rgb 'blue' pointtype 7 pointsize 0.5 title 'Semilla 1',\
 'data2.txt' with points lc rgb 'black' pointtype 5 pointsize 0.5 title 'Semilla 2',\
  'data5.txt' with points lc rgb 'red' pointtype 9 pointsize 0.5 title 'Semilla 5'
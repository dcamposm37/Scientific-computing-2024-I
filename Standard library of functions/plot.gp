set term pdf
set out "GammaFunction.pdf"
set grid
set xlabel "x"
set ylabel "y"
set title 'Función gamma'
set logscale y
plot 'data.txt' with points pointtype 7 pointsize 0.5
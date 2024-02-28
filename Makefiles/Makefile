fig.pdf: plot.gp data.txt
	gnuplot plot.gp

sumupdown.x: sumupdown.cpp
	g++ sumupdown.cpp -o sumupdown.x

data.txt: sumupdown.x
	./sumupdown.x > data.txt
fig.pdf: plot.gp data.txt
	gnuplot plot.gp

sumupdown.x: sumupdown.cpp
	g++ sumupdown.cpp -o sumupdown.x
#%.x: %.cpp
#	g++ $^ -o $@

data.txt: sumupdown.x
	./sumupdown.x > data.txt
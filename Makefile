CXX = g++
CFLAGS = -std=c++11
LFLAGS = -g -Wall -std=c++11
main: driver.o road.o restaurant.o park.o zoo.o habitat.o wolf.o lion.o zebra.o elephant.o hog.o macaque.o shark.o moray_eel.o dugong.o turtle.o dolphin.o whale.o eagle.o owl.o hummingbird.o cockatoo.o robin.o bat.o penguin.o hippopotamus.o pelican.o goose.o crane.o draco_lizard.o colugo.o sugar_glider.o
	$(CXX) $(LFLAGS) -o main driver.o road.o restaurant.o park.o zoo.o habitat.o wolf.o lion.o zebra.o elephant.o hog.o macaque.o shark.o moray_eel.o dugong.o turtle.o dolphin.o whale.o eagle.o owl.o hummingbird.o cockatoo.o robin.o bat.o penguin.o hippopotamus.o pelican.o goose.o crane.o draco_lizard.o colugo.o sugar_glider.o
	
driver.o: driver.cpp driver.h zoo.h pointer.h
	$(CXX) $(CFLAGS) -c driver.cpp

road.o: road.cpp road.h
	$(CXX) $(CFLAGS) -c road.cpp

restaurant.o: restaurant.cpp restaurant.h
	$(CXX) $(CFLAGS) -c restaurant.cpp

park.o: park.cpp park.h
	$(CXX) $(CFLAGS) -c park.cpp

zoo.o: zoo.cpp zoo.h pointer.h
	$(CXX) $(CFLAGS) -c zoo.cpp

habitat.o: habitat.cpp habitat.h
	$(CXX) $(CFLAGS) -c habitat.cpp

wolf.o: realAnimals/wolf.cpp
	$(CXX) $(CFLAGS) -c realAnimals/wolf.cpp

lion.o: realAnimals/lion.cpp
	$(CXX) $(CFLAGS) -c realAnimals/lion.cpp

zebra.o: realAnimals/zebra.cpp
	$(CXX) $(CFLAGS) -c realAnimals/zebra.cpp

elephant.o: realAnimals/elephant.cpp
	$(CXX) $(CFLAGS) -c realAnimals/elephant.cpp

hog.o: realAnimals/hog.cpp
	$(CXX) $(CFLAGS) -c realAnimals/hog.cpp

macaque.o: realAnimals/macaque.cpp
	$(CXX) $(CFLAGS) -c realAnimals/macaque.cpp

shark.o: realAnimals/shark.cpp
	$(CXX) $(CFLAGS) -c realAnimals/shark.cpp

moray_eel.o: realAnimals/moray_eel.cpp
	$(CXX) $(CFLAGS) -c realAnimals/moray_eel.cpp

dugong.o: realAnimals/dugong.cpp
	$(CXX) $(CFLAGS) -c realAnimals/dugong.cpp

turtle.o: realAnimals/turtle.cpp
	$(CXX) $(CFLAGS) -c realAnimals/turtle.cpp

dolphin.o: realAnimals/dolphin.cpp
	$(CXX) $(CFLAGS) -c realAnimals/dolphin.cpp

whale.o: realAnimals/whale.cpp
	$(CXX) $(CFLAGS) -c realAnimals/whale.cpp

eagle.o: realAnimals/eagle.cpp
	$(CXX) $(CFLAGS) -c realAnimals/eagle.cpp

owl.o: realAnimals/owl.cpp
	$(CXX) $(CFLAGS) -c realAnimals/owl.cpp

hummingbird.o: realAnimals/hummingbird.cpp
	$(CXX) $(CFLAGS) -c realAnimals/hummingbird.cpp

cockatoo.o: realAnimals/cockatoo.cpp
	$(CXX) $(CFLAGS) -c realAnimals/cockatoo.cpp

robin.o: realAnimals/robin.cpp
	$(CXX) $(CFLAGS) -c realAnimals/robin.cpp

bat.o: realAnimals/bat.cpp
	$(CXX) $(CFLAGS) -c realAnimals/bat.cpp

penguin.o: realAnimals/penguin.cpp
	$(CXX) $(CFLAGS) -c realAnimals/penguin.cpp

hippopotamus.o: realAnimals/hippopotamus.cpp
	$(CXX) $(CFLAGS) -c realAnimals/hippopotamus.cpp			

pelican.o: realAnimals/pelican.cpp
	$(CXX) $(CFLAGS) -c realAnimals/pelican.cpp

goose.o: realAnimals/goose.cpp
	$(CXX) $(CFLAGS) -c realAnimals/goose.cpp

crane.o: realAnimals/crane.cpp
	$(CXX) $(CFLAGS) -c realAnimals/crane.cpp

draco_lizard.o: realAnimals/draco_lizard.cpp
	$(CXX) $(CFLAGS) -c realAnimals/draco_lizard.cpp

colugo.o: realAnimals/colugo.cpp
	$(CXX) $(CFLAGS) -c realAnimals/colugo.cpp

sugar_glider.o: realAnimals/sugar_glider.cpp
	$(CXX) $(CFLAGS) -c realAnimals/sugar_glider.cpp	

clean: 
	$(RM) count *.o *~

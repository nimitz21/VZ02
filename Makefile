CXX = g++
CFLAGS = -std=c++11
LFLAGS = -g -Wall -std=c++11

main: main.o driver.o road.o restaurant.o park.o zoo.o habitat.o wolf.o lion.o zebra.o elephant.o hog.o macaque.o shark.o moray_eel.o dugong.o turtle.o dolphin.o whale.o eagle.o owl.o hummingbird.o cockatoo.o robin.o bat.o penguin.o hippopotamus.o pelican.o goose.o crane.o draco_lizard.o colugo.o sugar_glider.o
	$(CXX) $(LFLAGS) -o main main.o driver.o road.o restaurant.o park.o zoo.o habitat.o wolf.o lion.o zebra.o elephant.o hog.o macaque.o shark.o moray_eel.o dugong.o turtle.o dolphin.o whale.o eagle.o owl.o hummingbird.o cockatoo.o robin.o bat.o penguin.o hippopotamus.o pelican.o goose.o crane.o draco_lizard.o colugo.o sugar_glider.o

main.o: main.cpp
	$(CXX) $(CFLAGS) -c main.cpp

driver.o: src/driver/driver.cpp src/driver/driver.h src/zoo/zoo.h src/pointer/pointer.h src/utility/utility.h
	$(CXX) $(CFLAGS) -c src/driver/driver.cpp

road.o: src/road/road.cpp src/road/road.h
	$(CXX) $(CFLAGS) -c src/road/road.cpp

restaurant.o: src/restaurant/restaurant.cpp src/restaurant/restaurant.h
	$(CXX) $(CFLAGS) -c src/restaurant/restaurant.cpp

park.o: src/park/park.cpp src/park/park.h
	$(CXX) $(CFLAGS) -c src/park/park.cpp

zoo.o: src/zoo/zoo.cpp src/zoo/zoo.h src/pointer/pointer.h src/utility/utility.h
	$(CXX) $(CFLAGS) -c src/zoo/zoo.cpp

habitat.o: src/habitat/habitat.cpp src/habitat/habitat.h
	$(CXX) $(CFLAGS) -c src/habitat/habitat.cpp

wolf.o: src/wolf/wolf.cpp
	$(CXX) $(CFLAGS) -c src/wolf/wolf.cpp

lion.o: src/lion/lion.cpp
	$(CXX) $(CFLAGS) -c src/lion/lion.cpp

zebra.o: src/zebra/zebra.cpp
	$(CXX) $(CFLAGS) -c src/zebra/zebra.cpp

elephant.o: src/elephant/elephant.cpp
	$(CXX) $(CFLAGS) -c src/elephant/elephant.cpp

hog.o: src/hog/hog.cpp
	$(CXX) $(CFLAGS) -c src/hog/hog.cpp

macaque.o: src/macaque/macaque.cpp
	$(CXX) $(CFLAGS) -c src/macaque/macaque.cpp

shark.o: src/shark/shark.cpp
	$(CXX) $(CFLAGS) -c src/shark/shark.cpp

moray_eel.o: src/moray_eel/moray_eel.cpp
	$(CXX) $(CFLAGS) -c src/moray_eel/moray_eel.cpp

dugong.o: src/dugong/dugong.cpp
	$(CXX) $(CFLAGS) -c src/dugong/dugong.cpp

turtle.o: src/turtle/turtle.cpp
	$(CXX) $(CFLAGS) -c src/turtle/turtle.cpp

dolphin.o: src/dolphin/dolphin.cpp
	$(CXX) $(CFLAGS) -c src/dolphin/dolphin.cpp

whale.o: src/whale/whale.cpp
	$(CXX) $(CFLAGS) -c src/whale/whale.cpp

eagle.o: src/eagle/eagle.cpp
	$(CXX) $(CFLAGS) -c src/eagle/eagle.cpp

owl.o: src/owl/owl.cpp
	$(CXX) $(CFLAGS) -c src/owl/owl.cpp

hummingbird.o: src/hummingbird/hummingbird.cpp
	$(CXX) $(CFLAGS) -c src/hummingbird/hummingbird.cpp

cockatoo.o: src/cockatoo/cockatoo.cpp
	$(CXX) $(CFLAGS) -c src/cockatoo/cockatoo.cpp

robin.o: src/robin/robin.cpp
	$(CXX) $(CFLAGS) -c src/robin/robin.cpp

bat.o: src/bat/bat.cpp
	$(CXX) $(CFLAGS) -c src/bat/bat.cpp

penguin.o: src/penguin/penguin.cpp
	$(CXX) $(CFLAGS) -c src/penguin/penguin.cpp

hippopotamus.o: src/hippopotamus/hippopotamus.cpp
	$(CXX) $(CFLAGS) -c src/hippopotamus/hippopotamus.cpp			

pelican.o: src/pelican/pelican.cpp
	$(CXX) $(CFLAGS) -c src/pelican/pelican.cpp

goose.o: src/goose/goose.cpp
	$(CXX) $(CFLAGS) -c src/goose/goose.cpp

crane.o: src/crane/crane.cpp
	$(CXX) $(CFLAGS) -c src/crane/crane.cpp

draco_lizard.o: src/draco_lizard/draco_lizard.cpp
	$(CXX) $(CFLAGS) -c src/draco_lizard/draco_lizard.cpp

colugo.o: src/colugo/colugo.cpp
	$(CXX) $(CFLAGS) -c src/colugo/colugo.cpp

sugar_glider.o: src/sugar_glider/sugar_glider.cpp
	$(CXX) $(CFLAGS) -c src/sugar_glider/sugar_glider.cpp	

clean: 
	$(RM) count *.o *~

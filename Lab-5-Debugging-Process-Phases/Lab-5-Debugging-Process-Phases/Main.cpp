#include"Location.h"
#include"Developer.h"

/*
		  .--.           .--.
			  \         /
		\      `\_\o/_/`     /
		 \    .-'O . O`-.   /
		 |  .'_________`.  |
		  \.'^    Y    ^`./
		 .'       |       `.
		.         |         .
	   .          |          .
	   .          |          .
	   .          |          .
	   .          |          .
	 __.          |          .__
	/.--.         |         .--.\
 __//'   `.       |       .'   `\\___
`--'      /`:     |     .'\     `--'
		  |  `-.__|__.-'   |
		  |                |
		  /                \
		 /                  \
 */




int main() {
	Developer developer1(15);
	Developer developer2 = developer1;
	developer1.setAge(31);
	std::cout << "developer2.getAge() : " << developer2.getAge() << std::endl;

	Location locationA(8, 10);
	Location locationB(3, 3);
	double distanceBetweenAandB = locationA.distanceFrom(locationB);
	std::cout << "The distance between A and B = " << distanceBetweenAandB << std::endl;
 	return 0;
}
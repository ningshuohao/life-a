#include <iostream>
#include <vector>
namespace publishcode {
	class consle {
		void out(std::string outStr, std::string endStr) {
			std::cout << outStr << endStr;
		};
		void out(int outStr, std::string endStr) {
			std::cout << outStr << endStr;
		};
		void out(float outStr, std::string endStr) {
			std::cout << outStr << endStr;
		};
		std::string in() {
			
		};
	};
};
namespace privatecode {
	class consle{};
};
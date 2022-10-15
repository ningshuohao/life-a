#include <iostream>
namespace publish {
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
namespace privatec {
	class consle{};
};
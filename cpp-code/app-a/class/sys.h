#include <iostream>
#include <vector>
namespace publiccode {
	class var{
		public:
		void;
	};
	class consle {
		public:
		void out(std::string outStr, std::string endStr) {
			std::cout << outStr << endStr;
		};
		void out(int outStr, std::string endStr) {
			std::cout << outStr << endStr;
		};
		void out(float outStr, std::string endStr) {
			std::cout << outStr << endStr;
		};
		std::string in(string varName) {
			
		};
	};
};
namespace privatecode {
	class var{
		public:
		std::string var[] = {};
	};
};
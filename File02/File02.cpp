#include <iostream>

//int main() {
//
//	int val1;
//	std::cout << "첫 번째 숫자입력 : " << std::endl;
//	std::cin >> val1;
//
//	int val2;
//	std::cout << "두 번째 숫자입력 : " << std::endl;
//	std::cin >> val2;
//
//	int result = val2 + val1;
//	std::cout << "결과 : " << result << std::endl;
//
//	return 0;
//}

//int main() {
//
//	
//	std::string name;
//	int age = 0;
//
//	//std::cout << "이름 입력 > " << std::endl;
//	//std::cin >> name;
//
//	//std::cout << "나이 입력 > " << std::endl;
//	//std::cin >> age;
//
//	//std::cout << "입력 된 이름 : " << name << ", 나이 : " << age << std::endl;
//
//	std::cout << "이름 나이 입력 >> " << std::endl;
//	std::cin >> age >> name;
//
//
//	return 0;
//}

int main() {

	char name[100];
	char lang[200];

	std::cout << "이름은 무엇입니까?";
	std::cin >> name;

	std::cout << "좋아하는 프로그래밍 언어는 무엇인가요?";
	std::cin >> lang;

	std::cout << "내 이름은 " << name << " 입니다\n";
	std::cout << "제일 좋아하는 언어는 " << lang << " 입니다\n";

	return 0;
}
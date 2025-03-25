#include <stdio.h>

class MyClass
{
public:
	class Exception
	{
	private:
		int ErrorCode;

	public:
		Exception(int ae) : ErrorCode(ae) { }
		int GetErrorCode() { return ErrorCode; }
		void ReportError() {
			switch (ErrorCode) {
			case 1:
				puts("memory error.");
				break;
			case 2:
				puts("Out of range.");
				break;
			case 3:
				puts("disk error.");
				break;
			}
		}
	};
	void calc() {
		try {
			if (true/*에러 발생*/) throw Exception(1);
		}
		catch (Exception &e) {
			printf("error code = %d => ", e.GetErrorCode());
			e.ReportError();
		}
	}
	void calc2() throw(Exception) {
		if (true/*에러 발생*/) throw Exception(2);
	}
};

int main()
{
	MyClass m;
	m.calc();
	try {
		m.calc2();
	}
	catch (MyClass::Exception &e) {
		printf("error code = %d => ", e.GetErrorCode());
		e.ReportError();
	}
}


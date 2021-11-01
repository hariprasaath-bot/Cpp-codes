
namespace user_def
{

//constants for using
constexpr int buff = 1024;


class reverse{
	long num;
	public:
		long revnum(long);
};

class sort{
	public:
		long* ascend(long*, int);
		long* descend(long*, int);
};

class WriteToFile{
	public:
		void writingtofilefunc(char[],char[]);
};

class Factorial{
	public:
		long FindFactorial(long);
};

class UserReg{
	char u_name[buff];
	char u_pass[buff];

	public:
		void NewRegistration();
		void login();

};

}


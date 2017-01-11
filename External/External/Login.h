class Login
{
public:
	Login();
	~Login();
	void log_in();

private:
	void Connect();
};
extern Login* g_pLogin;
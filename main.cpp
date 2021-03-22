#include <iostream>

class Command
{
	public:
	
		virtual void Execute() = 0;
		virtual ~Command() {}
}

class SwitchCommand : Command
{
	public:
		virtual void Execute()
		{
			swtich();
		}
	
	private:
		void switch()
		{
			
		}
}

class Command
{
	public:
		virtual void Execute() = 0;
		virtual ~Command(){};
		
	protected:
		void Move()
		{
			
		}
}

class Commands : Command
{
	private:
		override void Execute()
		{
			Move();
		}// only works for one function
}



int main(void)
{
	Commands.Execute();
	
	
	system("pause");
}

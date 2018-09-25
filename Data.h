#ifndef Data_H
#define Data_H
class Data{
	private:
		int x;
		float y;

	public:
		Data()
		Data(int a, float b);
		int getX();
		float getY();
		void setX(int a);
		void setY(float b);
	};
#endif

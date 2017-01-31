#ifndef Hall_h
#define Hall_h

class Hall
{
	public:
		Hall(int pin, int zeroReading);
		void debug();
		void init();
		int readRaw();
		int read();
	private:
		bool _debug = false;
		int _pin, _zeroReading;
};
#endif

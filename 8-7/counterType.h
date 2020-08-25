#pragma once
class counterType
{
	public:

		counterType();
		counterType(int counter);

		// Initialize counter to 0.
		void setCounter();

		// Return the value of counter.
		int getCounter();

		// Set counter to the integer value specified by the user.
		void setCounter(int counter);

		// Incrementand counter by one.
		void incrementCounter();

		// Decrement counter by one.
		void decrementCounter();

		//Print the value of counter using the print function.
		void print();


	private:
		int counter;

};
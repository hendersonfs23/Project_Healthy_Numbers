//Fred Henderson C++ Program for Engineering@Syracuse Application
//Compiled 01-26-2018
#include <iostream> //allows program to output data to the screen
#include <string>

using namespace std;//allows stings in the program


int main()
{
	std::cout << "Problem.\n\n\nThis program is written to help people determine some of their healthy numbers.\n\n";
	std::cout << "The end user will input date and this program will calculate the following:\n\n\t\a";
	std::cout << "Target Heart Training Zone \n\n\n\t";
	std::cout << "Body Mass Index\n\n\n\t";
	std::cout << "Percent of Body Fat\n\n\n";

	//Entering in Users Name:
	string firstname, lastname, fullname;
	std::cout << "Please enter your First Name: ";
	getline(cin, firstname); std::cout << "\n";
	std::cout << "Please enter your Last Name: ";
	getline(cin, lastname); std::cout << "\n";
	fullname = lastname + "," + firstname;

	//Asking the User to Numbers needed for Healthy Numbers Calculation Data.
	//Age Calulation

	std::cout << "Maxium Heart Rate \n\n";

	int a, f, i, m, r, w;// a = age, f = feet, i=inches , m = maxium heart rate, r = resting heart rate, w = weight, h =   - Age = Max Heart Rate)
	std::cout << "Enter your age in years: ";
	std::cin >> a; std::cout << "\n";

	std::cout << "How to Caluculate your Resting Heart Rate!\n\n\t(Resting pulse should be measured first thing in the morning with your fingers and a stopwatch.\n\tPut your middle and index finger to either your radial artery on your wrist or your carotid artery in your neck.\n\tOnce you find your pulse, count how many beats occur in 20 seconds, and multiply this number by 3.\n\tThis is your resting pulse.) \n\n" << std::endl;
	std::cout << "Enter your Resting Heart Rate: ";
	std::cin >> r; std::cout << "\n";

	const int MaxHeartRate = 220;

	std::cout << "\t" << "Your Maximum Heart Rate is: " << MaxHeartRate - a; std::cout << " beats per minute"<< std::endl;
	std::cout << "\t" << "Your Heart Rate Reserve is: " << ((MaxHeartRate - a) - r); std::cout << " beats per minute" << std::endl;

	const int HRR = ((MaxHeartRate - a) - r);

	std::cout << "Training Zone:"; std::cout << "\n" << std::endl;
	std::cout << "\t" << "Low End of your Training Zone: " << ((HRR * .07) + HRR); std::cout << "beats per minute (bpm). (This is a 70% increase of your Heart Rate Reserve.)" << std::endl;
	std::cout << "\t" << "High End of your Training Zone: " << ((HRR * .85) + HRR);  std::cout << "beats per minute (bpm). (This is a 85% increase of your Heart Rate Reserve.)" << std::endl << "\n\n";
	const int LETZ = ((HRR * .07) + HRR);
	const int HETZ = ((HRR * .85) + HRR);

	std::cout << "Enter your Weight in pounds(lbs): ";
	std::cin >> w; std::cout << "\n";
	const int wkg = (w * .45);

	std::cout << "Enter your height in feet: " << std::endl;
	std::cout << "\tFeet: "; std::cin >> f, std::cout << "\tInches: "; std::cin >> i;
	const int Feet = (f * 12);
	const int FtoI = Feet + i;
	const int ItoM = (FtoI);
	const int HnM = (FtoI * 0.025);
	const int HnM2 = ((FtoI * .025)*(FtoI * .025));
	const int GRL = 5.4;
	const int BOY = 16.2;
	const int BMI = (wkg / HnM2);
	const int BFPM = ((1.20 * BMI) + (.23 * a) - 16.2);
	const int BFPW = ((1.20 * BMI) + (.23 * a) - 5.4);
	const int bfpw = ((1.20 * BMI) + (.23 * a) - 5.4);
	//Body Fat Percentage Calculation

	string sex;
	std::cout << "To calculate your Body Fat Percentage, we need to know if your are a male or female. " << std::endl; std::cout << "\n";
	std::cout << "\t Please enter your Gender. Enter either 'Male' or 'Female'? ";
	std::cin >> sex;
	
	// Results

	std::cout << "RESULTS: These are the results of the Healthy Number program!" << std::endl << "\n\n";
	std::cout << "Fullname: " << fullname << std::endl; std::cout << "\n";
	std::cout << "Age: " << a << std::endl; std::cout << "\n";
	std::cout << "Maximum Heart Rate: " << MaxHeartRate << std::endl;
	std::cout << "\t" << "Your Maxium Heart Rate is: " << MaxHeartRate - a << " bpm." << std::endl;
	std::cout << "\t" << "Your Heart Rate Reserve is: " << HRR << " bpm." << std::endl;
	std::cout << "\t" << "Your Low End Heart Rate Training Zone: " << LETZ << " bpm." << std::endl;
	std::cout << "\t" << "Your High End Heart Rate Training Zone: " << HETZ << " bpm." << std::endl <<"\n";
	std::cout << "Weight Conversions from lbs to kg." << std::endl << std::endl << "\n";
	std::cout << "\t" << "Your Weight: " << w << " lbs." << std::endl;
	std::cout << "\t" << "Your Weight converted to kilograms: " << wkg << " kg." << std::endl << "\n";
	std::cout << "Height Conversoin from feet to inches." << std::endl << std::endl << "\n";
	std::cout << "\t" << "Your Height: " << (FtoI) << " inches." << std::endl; std::cout << "\n";
	std::cout << "Height Conversion from Inches to the Metric Unit. " << std::endl;
	std::cout << "\t" << "Your Height is:  " << (FtoI) * .025 << "  in metric units" << std::endl;
	std::cout << "\t" << "Your Height Metric Doubled: " << ((FtoI * .025) * (FtoI * .025)) << HnM2 << std::endl; std::cout << "\n";
	std::cout << "Body Mass Index Results: " << std::endl; std::cout << "\n";
	std::cout << "\t" << firstname << " your body mass index is " << (wkg / HnM2) << " ." << std::endl; std::cout << "\n";
	std::cout << "Body Fat Percentage Results : " << std::endl; std::cout << "\n";

	std::cout << "\t" << "Since, you are a " << sex << " your BPF is ";
	{
		if (sex == "Male") // || "male" || "m" || "M")

			std::cout << BFPM <<" " << "%.\n\n\n\n\n" << std::endl;

		else
			std::cout << BFPW <<" "<<"%. \n\n\n\n\n" << std::endl;

	//if (sex == "Female" || "female" || "f" || "F")
	}
	std::cout << "This Prgram was written by Fred Henderson as a sample of programming experience.\nThis code sample submission is for his application to the\nCybersecurity Master of Science Degree at Syracuse's Engineering and Computer Science program.\nThank you for your time and consideration.";
	std::cin.get();
	std::cin.get();
	
	return 1906;
}
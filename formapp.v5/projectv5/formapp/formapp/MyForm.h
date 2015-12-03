#pragma once
#include <msclr/marshal_cppstd.h>
#include "opencv2/highgui/highgui.hpp"
#include <opencv\cv.h>
#include "opencv2/core/core.hpp"
#include "opencv2\imgproc\imgproc.hpp"
#include <iostream>
#include <stdio.h>
#include<stdlib.h>
#include"opencv2/opencv.hpp"

#define uget(x,y) at<unsigned char>(y,x)
#define uset(x,y,v)  at<unsigned char>(y,x)=v;
#define fget(x,y)  at<float>(y,x);
#define fset(x,y,v) at<float>(y,x)=v;

namespace formapp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cv;
	using namespace std;

	public ref class MyForm : public System::Windows::Forms::Form
	{


	public:

		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//


		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  patient_name;
	private: System::Windows::Forms::Label^  patient_age;
	private: System::Windows::Forms::Label^  patient_bloodgroup;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Drawing::Color color;
	private: System::String^ fname;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->patient_name = (gcnew System::Windows::Forms::Label());
			this->patient_age = (gcnew System::Windows::Forms::Label());
			this->patient_bloodgroup = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 160);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Import Picture";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(115, 160);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Analyse";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 190);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Imported File Location:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 212);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"No Files Found!";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 252);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(260, 144);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 232);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Thumbnails:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->ImageLocation = L"C:\\Users\\Chanawatn Pound\\Documents\\Visual Studio 2013\\Projects\\formapp.v5\\M.jpg";
			this->pictureBox2->Location = System::Drawing::Point(12, 34);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(96, 108);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label4->Location = System::Drawing::Point(13, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Patient :";
			// 
			// patient_name
			// 
			this->patient_name->AutoSize = true;
			this->patient_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->patient_name->Location = System::Drawing::Point(75, 9);
			this->patient_name->Name = L"patient_name";
			this->patient_name->Size = System::Drawing::Size(79, 17);
			this->patient_name->TabIndex = 9;
			this->patient_name->Text = L"Judi Dench";
			this->patient_name->Click += gcnew System::EventHandler(this, &MyForm::patient_name_Click);
			// 
			// patient_age
			// 
			this->patient_age->AutoSize = true;
			this->patient_age->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->patient_age->Location = System::Drawing::Point(129, 32);
			this->patient_age->Name = L"patient_age";
			this->patient_age->Size = System::Drawing::Size(37, 17);
			this->patient_age->TabIndex = 10;
			this->patient_age->Text = L"Age:";
			// 
			// patient_bloodgroup
			// 
			this->patient_bloodgroup->AutoSize = true;
			this->patient_bloodgroup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->patient_bloodgroup->Location = System::Drawing::Point(129, 75);
			this->patient_bloodgroup->Name = L"patient_bloodgroup";
			this->patient_bloodgroup->Size = System::Drawing::Size(62, 17);
			this->patient_bloodgroup->TabIndex = 11;
			this->patient_bloodgroup->Text = L"Doctor : ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label5->Location = System::Drawing::Point(172, 32);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 17);
			this->label5->TabIndex = 12;
			this->label5->Text = L"80";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label6->Location = System::Drawing::Point(197, 75);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Doc Brown";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label7->Location = System::Drawing::Point(235, 53);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(17, 17);
			this->label7->TabIndex = 15;
			this->label7->Text = L"A";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label8->Location = System::Drawing::Point(129, 53);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 17);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Blood Group : ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::Green;
			this->label9->Location = System::Drawing::Point(134, 190);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 16;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label10->Location = System::Drawing::Point(228, 96);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(107, 17);
			this->label10->TabIndex = 18;
			this->label10->Text = L"1 October 2015";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label11->Location = System::Drawing::Point(130, 96);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(98, 17);
			this->label11->TabIndex = 17;
			this->label11->Text = L"Admitted On : ";
			// 
			// pictureBox3
			// 
			this->pictureBox3->ImageLocation = L"C:\\Users\\Chanawatn Pound\\Desktop\\rsz_doc-brown.jpg";
			this->pictureBox3->Location = System::Drawing::Point(463, 9);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(45, 52);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 19;
			this->pictureBox3->TabStop = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label12->Location = System::Drawing::Point(379, 32);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(76, 17);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Doc Brown";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label13->Location = System::Drawing::Point(362, 10);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(98, 17);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Logged in as: ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label14->Location = System::Drawing::Point(243, 118);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(121, 17);
			this->label14->TabIndex = 23;
			this->label14->Text = L"1 December 2015";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label15->Location = System::Drawing::Point(130, 118);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(113, 17);
			this->label15->TabIndex = 22;
			this->label15->Text = L"Last Diagnosis : ";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label16->Location = System::Drawing::Point(225, 163);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(107, 17);
			this->label16->TabIndex = 25;
			this->label16->Text = L"Current Status: ";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label17->ForeColor = System::Drawing::Color::Red;
			this->label17->Location = System::Drawing::Point(329, 163);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(186, 17);
			this->label17->TabIndex = 24;
			this->label17->Text = L"No Cancer cell has founded!";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(520, 408);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->patient_bloodgroup);
			this->Controls->Add(this->patient_age);
			this->Controls->Add(this->patient_name);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Ground Truth Analysis for Breast Cancer Prototype";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {


		// Displays an OpenFileDialog so the user can select a Cursor.
		OpenFileDialog ^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->Filter = "Image Files (*.bmp, *.jpg, *.png)|*.bmp;*.jpg;*.png";
		openFileDialog1->Title = "Select an Image File";

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			fname = openFileDialog1->FileName;
			MessageBox::Show("Import Complete");
			MyForm::color = System::Drawing::Color::Green;
			MyForm::label9->Text = "Complete!";
			MyForm::label2->Text = fname;
			pictureBox1->ImageLocation = fname;
		}
		else{
			MyForm::color = System::Drawing::Color::Red;
			MyForm::label9->ForeColor = color;
			MyForm::label9->Text = "Error!";
		}

	}




	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		System::String^ fname_priv = fname;
		std::string filepath = msclr::interop::marshal_as< std::string >(fname_priv);


		cv::Mat img = cv::imread(filepath, IMREAD_GRAYSCALE);

		//cv::cvtColor(img, img, CV_BGR2GRAY);

		Mat roi = img(Rect(170, 90, 480, 390));
		Mat dst;

		imshow("Original Image", roi);

		equalizeHist(roi, dst);

		imshow("Equalized Image", dst);

		Mat canny, canny1;

		vector<vector<cv::Point>> contours;

		vector<Vec4i>hierarchy;

		int thresh = 68;

		//int thresh = 30;

		int max_thresh = 255;

		RNG rng(12345);

		threshold(dst, canny1, thresh, max_thresh, THRESH_BINARY);

		imshow("Binary Thresholding", canny1);

		medianBlur(canny1, canny, 9);

		imshow("Median Blur", canny);

		// Setup SimpleBlobDetector parameters.
		SimpleBlobDetector::Params params;

		// Change thresholds
		params.minThreshold = 75;
		params.maxThreshold = 255;

		// Filter by Area.
		params.filterByArea = false;
		params.minArea = 200;

		// Filter by Circularity
		params.filterByCircularity = false;
		params.minCircularity = 0.3;

		// Filter by Convexity
		params.filterByConvexity = true;
		params.minConvexity = 0.66;
		params.maxConvexity = 0.75;

		// Filter by Inertia
		params.filterByInertia = true;
		params.minInertiaRatio = 0.22;
		params.maxInertiaRatio = 0.40;

		// Storage for blobs
		vector<KeyPoint> keypoints;


#if CV_MAJOR_VERSION < 3   // If you are using OpenCV 2

		// Set up detector with params
		SimpleBlobDetector detector(params);

		// Detect blobs
		detector.detect(im, keypoints);
#else 

		// Set up detector with params
		Ptr<SimpleBlobDetector> detector = SimpleBlobDetector::create(params);

		// Detect blobs
		detector->detect(dst, keypoints);
#endif 

		// Draw detected blobs as red circles.
		// DrawMatchesFlags::DRAW_RICH_KEYPOINTS flag ensures
		// the size of the circle corresponds to the size of blob

		Mat im_with_keypoints;
		drawKeypoints(dst, keypoints, im_with_keypoints, Scalar(0, 0, 255), DrawMatchesFlags::DRAW_RICH_KEYPOINTS);

		// Show blobs
		imshow("Find Suspected Area", im_with_keypoints);

		cv::Point2f key = Point2f(keypoints[0].pt.x, keypoints[0].pt.y);

		Scalar color = Scalar(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255));

		Mat draws = Mat::zeros(canny.size(), CV_8UC3);

		dst.convertTo(draws, CV_8UC3);

		cvtColor(draws, draws, CV_GRAY2RGB);

		circle(draws, key, 3, color, -1, 8, 0);

		imshow("Find Feature Keypoints", draws);

		findContours(canny, contours, hierarchy, CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE, cv::Point(0, 0));

		Mat draws2 = Mat::zeros(canny.size(), CV_8UC3);

		dst.convertTo(draws2, CV_8UC3);

		cvtColor(draws2, draws2, CV_GRAY2RGB);

		for (int i = 0; i < contours.size(); i++){

			color = Scalar(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255));

			drawContours(draws2, contours, i, color, 2, 8, hierarchy, 0, cv::Point());

		}

		imshow("Find Contours", draws2);

		double closest_dist = 9999.0;
		int contourIndex;

		for (int i = 0; i < contours.size(); i++){

			double current_dist = pointPolygonTest(contours[i], Point2f(keypoints[0].pt.x, keypoints[0].pt.y), true);

			if (current_dist > 0){
				if (closest_dist > current_dist){
					closest_dist = current_dist;
					contourIndex = i;
				}
				else{}
			}
			else{}
		}

		color = Scalar(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255));

		drawContours(draws, contours, contourIndex, color, 2, 8, hierarchy, 0, cv::Point());

		imshow("Find Tumor Contour", draws);

	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void patient_name_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
}
};

}
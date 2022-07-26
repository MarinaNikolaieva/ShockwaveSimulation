#pragma once

#include <stdlib.h>
#include <cstdio>
#include <ctime>
#include <math.h>
#include <vector>
#include <thread>
#include <string>

namespace ShockwaveSimulation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using System::Windows::Forms::FileDialog;
	using namespace System::Threading::Tasks;

	/// <summary>
	/// Summary for GUI
	/// </summary>
	public ref class GUI : public System::Windows::Forms::Form
	{
	public:
		GUI(void)
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
		~GUI()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ LaunchButton;
	private: System::Windows::Forms::GroupBox^ ShockwaveGroupBox;
	private: System::Windows::Forms::Label^ DistortionWidthLabel;
	protected:




	private: System::Windows::Forms::TextBox^ DistortionWidthTextBox;
	private: System::Windows::Forms::Label^ SpreadSpeedLabel;


	private: System::Windows::Forms::TextBox^ SpreadSpeedTextBox;
	private: System::Windows::Forms::Label^ RadiusLabel;


	private: System::Windows::Forms::TextBox^ RadiusTextBox;

	private: System::Windows::Forms::GroupBox^ DistortionGroupBox;
	private: System::Windows::Forms::Label^ MeanLabel;


	private: System::Windows::Forms::TextBox^ DistortMeanTextBox;

	private: System::Windows::Forms::Button^ PictureChangeButton;
	private: System::Windows::Forms::PictureBox^ PictureBox;
	private: System::Windows::Forms::Label^ KeepLabel;
	private: System::Windows::Forms::TextBox^ KeepTextBox;
	private: System::Windows::Forms::RadioButton^ SeqRadioButton;
	private: System::Windows::Forms::RadioButton^ ParalRadioButton;


	private: System::Windows::Forms::GroupBox^ ParallelismGroupBox;
	private: System::Windows::Forms::Label^ DistortModeLabel;
	private: System::Windows::Forms::TextBox^ DistortModeTextBox;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GUI::typeid));
			this->LaunchButton = (gcnew System::Windows::Forms::Button());
			this->ShockwaveGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->KeepLabel = (gcnew System::Windows::Forms::Label());
			this->KeepTextBox = (gcnew System::Windows::Forms::TextBox());
			this->DistortionWidthLabel = (gcnew System::Windows::Forms::Label());
			this->DistortionWidthTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SpreadSpeedLabel = (gcnew System::Windows::Forms::Label());
			this->SpreadSpeedTextBox = (gcnew System::Windows::Forms::TextBox());
			this->RadiusLabel = (gcnew System::Windows::Forms::Label());
			this->RadiusTextBox = (gcnew System::Windows::Forms::TextBox());
			this->DistortionGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->MeanLabel = (gcnew System::Windows::Forms::Label());
			this->DistortMeanTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PictureChangeButton = (gcnew System::Windows::Forms::Button());
			this->PictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->SeqRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->ParalRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->ParallelismGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->DistortModeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->DistortModeLabel = (gcnew System::Windows::Forms::Label());
			this->ShockwaveGroupBox->SuspendLayout();
			this->DistortionGroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBox))->BeginInit();
			this->ParallelismGroupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// LaunchButton
			// 
			this->LaunchButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->LaunchButton->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LaunchButton->Location = System::Drawing::Point(1019, 642);
			this->LaunchButton->Name = L"LaunchButton";
			this->LaunchButton->Size = System::Drawing::Size(353, 60);
			this->LaunchButton->TabIndex = 1;
			this->LaunchButton->Text = L"Launch";
			this->LaunchButton->UseVisualStyleBackColor = true;
			this->LaunchButton->Click += gcnew System::EventHandler(this, &GUI::LaunchButton_Click);
			// 
			// ShockwaveGroupBox
			// 
			this->ShockwaveGroupBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ShockwaveGroupBox->Controls->Add(this->KeepLabel);
			this->ShockwaveGroupBox->Controls->Add(this->KeepTextBox);
			this->ShockwaveGroupBox->Controls->Add(this->DistortionWidthLabel);
			this->ShockwaveGroupBox->Controls->Add(this->DistortionWidthTextBox);
			this->ShockwaveGroupBox->Controls->Add(this->SpreadSpeedLabel);
			this->ShockwaveGroupBox->Controls->Add(this->SpreadSpeedTextBox);
			this->ShockwaveGroupBox->Controls->Add(this->RadiusLabel);
			this->ShockwaveGroupBox->Controls->Add(this->RadiusTextBox);
			this->ShockwaveGroupBox->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ShockwaveGroupBox->Location = System::Drawing::Point(1020, 13);
			this->ShockwaveGroupBox->Name = L"ShockwaveGroupBox";
			this->ShockwaveGroupBox->Size = System::Drawing::Size(352, 294);
			this->ShockwaveGroupBox->TabIndex = 2;
			this->ShockwaveGroupBox->TabStop = false;
			this->ShockwaveGroupBox->Text = L"Shockwave parameters";
			// 
			// KeepLabel
			// 
			this->KeepLabel->AutoSize = true;
			this->KeepLabel->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->KeepLabel->Location = System::Drawing::Point(163, 187);
			this->KeepLabel->Name = L"KeepLabel";
			this->KeepLabel->Size = System::Drawing::Size(144, 75);
			this->KeepLabel->TabIndex = 7;
			this->KeepLabel->Text = L"Keep before\r\nclear (sec)\r\n(21+ = stay)";
			// 
			// KeepTextBox
			// 
			this->KeepTextBox->Location = System::Drawing::Point(6, 187);
			this->KeepTextBox->Name = L"KeepTextBox";
			this->KeepTextBox->Size = System::Drawing::Size(145, 35);
			this->KeepTextBox->TabIndex = 6;
			this->KeepTextBox->Text = L"5";
			// 
			// DistortionWidthLabel
			// 
			this->DistortionWidthLabel->AutoSize = true;
			this->DistortionWidthLabel->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DistortionWidthLabel->Location = System::Drawing::Point(163, 118);
			this->DistortionWidthLabel->Name = L"DistortionWidthLabel";
			this->DistortionWidthLabel->Size = System::Drawing::Size(181, 50);
			this->DistortionWidthLabel->TabIndex = 5;
			this->DistortionWidthLabel->Text = L"Distortion width\r\n(1/5th of radius)";
			// 
			// DistortionWidthTextBox
			// 
			this->DistortionWidthTextBox->Location = System::Drawing::Point(7, 118);
			this->DistortionWidthTextBox->Name = L"DistortionWidthTextBox";
			this->DistortionWidthTextBox->Size = System::Drawing::Size(145, 35);
			this->DistortionWidthTextBox->TabIndex = 4;
			this->DistortionWidthTextBox->Text = L"20";
			this->DistortionWidthTextBox->TextChanged += gcnew System::EventHandler(this, &GUI::DistortionWidthTextBox_TextChanged);
			// 
			// SpreadSpeedLabel
			// 
			this->SpreadSpeedLabel->AutoSize = true;
			this->SpreadSpeedLabel->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SpreadSpeedLabel->Location = System::Drawing::Point(163, 76);
			this->SpreadSpeedLabel->Name = L"SpreadSpeedLabel";
			this->SpreadSpeedLabel->Size = System::Drawing::Size(165, 25);
			this->SpreadSpeedLabel->TabIndex = 3;
			this->SpreadSpeedLabel->Text = L"Spread slowing";
			// 
			// SpreadSpeedTextBox
			// 
			this->SpreadSpeedTextBox->Location = System::Drawing::Point(6, 76);
			this->SpreadSpeedTextBox->Name = L"SpreadSpeedTextBox";
			this->SpreadSpeedTextBox->Size = System::Drawing::Size(146, 35);
			this->SpreadSpeedTextBox->TabIndex = 2;
			this->SpreadSpeedTextBox->Text = L"0.0";
			// 
			// RadiusLabel
			// 
			this->RadiusLabel->AutoSize = true;
			this->RadiusLabel->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RadiusLabel->Location = System::Drawing::Point(163, 35);
			this->RadiusLabel->Name = L"RadiusLabel";
			this->RadiusLabel->Size = System::Drawing::Size(79, 25);
			this->RadiusLabel->TabIndex = 1;
			this->RadiusLabel->Text = L"Radius";
			// 
			// RadiusTextBox
			// 
			this->RadiusTextBox->Location = System::Drawing::Point(7, 35);
			this->RadiusTextBox->Name = L"RadiusTextBox";
			this->RadiusTextBox->Size = System::Drawing::Size(145, 35);
			this->RadiusTextBox->TabIndex = 0;
			this->RadiusTextBox->Text = L"100";
			this->RadiusTextBox->TextChanged += gcnew System::EventHandler(this, &GUI::RadiusTextBox_TextChanged);
			// 
			// DistortionGroupBox
			// 
			this->DistortionGroupBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->DistortionGroupBox->Controls->Add(this->DistortModeLabel);
			this->DistortionGroupBox->Controls->Add(this->DistortModeTextBox);
			this->DistortionGroupBox->Controls->Add(this->MeanLabel);
			this->DistortionGroupBox->Controls->Add(this->DistortMeanTextBox);
			this->DistortionGroupBox->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DistortionGroupBox->Location = System::Drawing::Point(1019, 313);
			this->DistortionGroupBox->Name = L"DistortionGroupBox";
			this->DistortionGroupBox->Size = System::Drawing::Size(353, 168);
			this->DistortionGroupBox->TabIndex = 3;
			this->DistortionGroupBox->TabStop = false;
			this->DistortionGroupBox->Text = L"Distortion parameters";
			// 
			// MeanLabel
			// 
			this->MeanLabel->AutoSize = true;
			this->MeanLabel->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MeanLabel->Location = System::Drawing::Point(169, 35);
			this->MeanLabel->Name = L"MeanLabel";
			this->MeanLabel->Size = System::Drawing::Size(66, 25);
			this->MeanLabel->TabIndex = 1;
			this->MeanLabel->Text = L"Mean";
			// 
			// DistortMeanTextBox
			// 
			this->DistortMeanTextBox->Location = System::Drawing::Point(7, 35);
			this->DistortMeanTextBox->Name = L"DistortMeanTextBox";
			this->DistortMeanTextBox->Size = System::Drawing::Size(146, 35);
			this->DistortMeanTextBox->TabIndex = 0;
			this->DistortMeanTextBox->Text = L"2.0";
			// 
			// PictureChangeButton
			// 
			this->PictureChangeButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->PictureChangeButton->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PictureChangeButton->Location = System::Drawing::Point(1019, 582);
			this->PictureChangeButton->Name = L"PictureChangeButton";
			this->PictureChangeButton->Size = System::Drawing::Size(353, 54);
			this->PictureChangeButton->TabIndex = 4;
			this->PictureChangeButton->Text = L"Change picture";
			this->PictureChangeButton->UseVisualStyleBackColor = true;
			this->PictureChangeButton->Click += gcnew System::EventHandler(this, &GUI::PictureChangeButton_Click);
			// 
			// PictureBox
			// 
			this->PictureBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->PictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PictureBox.BackgroundImage")));
			this->PictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->PictureBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PictureBox->Location = System::Drawing::Point(13, 13);
			this->PictureBox->Name = L"PictureBox";
			this->PictureBox->Size = System::Drawing::Size(1000, 689);
			this->PictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->PictureBox->TabIndex = 0;
			this->PictureBox->TabStop = false;
			// 
			// SeqRadioButton
			// 
			this->SeqRadioButton->AutoSize = true;
			this->SeqRadioButton->Checked = true;
			this->SeqRadioButton->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SeqRadioButton->Location = System::Drawing::Point(10, 34);
			this->SeqRadioButton->Name = L"SeqRadioButton";
			this->SeqRadioButton->Size = System::Drawing::Size(141, 29);
			this->SeqRadioButton->TabIndex = 5;
			this->SeqRadioButton->TabStop = true;
			this->SeqRadioButton->Text = L"Sequential";
			this->SeqRadioButton->UseVisualStyleBackColor = true;
			// 
			// ParalRadioButton
			// 
			this->ParalRadioButton->AutoSize = true;
			this->ParalRadioButton->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ParalRadioButton->Location = System::Drawing::Point(173, 34);
			this->ParalRadioButton->Name = L"ParalRadioButton";
			this->ParalRadioButton->Size = System::Drawing::Size(108, 29);
			this->ParalRadioButton->TabIndex = 6;
			this->ParalRadioButton->Text = L"Parallel";
			this->ParalRadioButton->UseVisualStyleBackColor = true;
			// 
			// ParallelismGroupBox
			// 
			this->ParallelismGroupBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->ParallelismGroupBox->Controls->Add(this->ParalRadioButton);
			this->ParallelismGroupBox->Controls->Add(this->SeqRadioButton);
			this->ParallelismGroupBox->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ParallelismGroupBox->Location = System::Drawing::Point(1020, 487);
			this->ParallelismGroupBox->Name = L"ParallelismGroupBox";
			this->ParallelismGroupBox->Size = System::Drawing::Size(352, 77);
			this->ParallelismGroupBox->TabIndex = 7;
			this->ParallelismGroupBox->TabStop = false;
			this->ParallelismGroupBox->Text = L"Parallelism";
			// 
			// DistortModeTextBox
			// 
			this->DistortModeTextBox->Location = System::Drawing::Point(8, 77);
			this->DistortModeTextBox->Name = L"DistortModeTextBox";
			this->DistortModeTextBox->Size = System::Drawing::Size(144, 35);
			this->DistortModeTextBox->TabIndex = 2;
			this->DistortModeTextBox->Text = L"3.5";
			// 
			// DistortModeLabel
			// 
			this->DistortModeLabel->AutoSize = true;
			this->DistortModeLabel->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DistortModeLabel->Location = System::Drawing::Point(169, 77);
			this->DistortModeLabel->Name = L"DistortModeLabel";
			this->DistortModeLabel->Size = System::Drawing::Size(65, 25);
			this->DistortModeLabel->TabIndex = 3;
			this->DistortModeLabel->Text = L"Mode";
			// 
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1384, 714);
			this->Controls->Add(this->ParallelismGroupBox);
			this->Controls->Add(this->PictureChangeButton);
			this->Controls->Add(this->DistortionGroupBox);
			this->Controls->Add(this->ShockwaveGroupBox);
			this->Controls->Add(this->LaunchButton);
			this->Controls->Add(this->PictureBox);
			this->Name = L"GUI";
			this->Text = L"GUI";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ShockwaveGroupBox->ResumeLayout(false);
			this->ShockwaveGroupBox->PerformLayout();
			this->DistortionGroupBox->ResumeLayout(false);
			this->DistortionGroupBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBox))->EndInit();
			this->ParallelismGroupBox->ResumeLayout(false);
			this->ParallelismGroupBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Drawing::Graphics^ graph;
	private: System::Drawing::Pen^ pen;
	private: System::Drawing::Pen^ singlePen;
	private: System::Drawing::SolidBrush^ solidBrush;
	private: Bitmap^ map;
	private: Bitmap^ mapResized;
	private: int ex;
	private: int ey;
	private: int tempRadius;
	private: double aParabolaCoeff;
	private: double aCubicCoeff;
	private: int pictureWidth;
	private: int pictureHeight;
	private: int zoomedWidth;
	private: int zoomedHeight;
	private: int boxWidth;
	private: int boxHeight;
	private: int zoomedPictWidth;
	private: int zoomedPictHeight;
	private: int leftPictureLimit;
	private: int upPictureLimit;
	private: int rightPictureLimit;
	private: int downPictureLimit;
	private: System::Collections::ArrayList^ polynomeCoefs = gcnew ArrayList();
		   //polynomeCoefs[0] = a0, [1] = a1 for x, [2] = a2 for x^2 etc
	private: System::Collections::ArrayList^ Xs = gcnew ArrayList();
	private: System::Collections::ArrayList^ Ys = gcnew ArrayList();
	private: double keepMean = 0.0;

	private: System::Void PictureChangeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ dialog = gcnew OpenFileDialog();
		dialog->Title = "Open Image";
		dialog->Filter = "Image Files|*.jpg;*.jpeg;*.png;*.bmp";

		if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			
			Bitmap^ pict = gcnew Bitmap(dialog->FileName);
			this->PictureBox->BackgroundImage = pict;
			graph->Clear(Color::Transparent);
		}
	}

	private: std::vector<std::vector<double>> matrixMultiply(std::vector<std::vector<double>> matrix1, std::vector<std::vector<double>> matrix2) {
		std::vector<std::vector<double>> matrixRes(matrix1.size(), std::vector<double>(matrix2[0].size(), 0.0));
		for (int i = 0; i < matrix1.size(); i++) {
			for (int j = 0; j < matrix2[0].size(); j++) {
				matrixRes[i][j] = 0.0;
				for (int k = 0; k < matrix2.size(); k++) {
					matrixRes[i][j] += matrix1[i][k] * matrix2[k][j];
				}
			}
		}
		return matrixRes;
	}

	private: std::vector<std::vector<double>> matrixInvert(std::vector<std::vector<double>> matrix) {
		std::vector<std::vector<double>> matrixRes(matrix.size(), std::vector<double>(matrix[0].size(), 0.0));
		std::vector<std::vector<double>> L(matrix.size(), std::vector<double>(matrix[0].size(), 0.0));
		std::vector<std::vector<double>> U(matrix.size(), std::vector<double>(matrix[0].size(), 0.0));
		std::vector<std::vector<double>> Y(matrix.size(), std::vector<double>(matrix[0].size(), 0.0));

		//Let's use the LU decomposition method. Find L and U matrixes
		for (int i = 0; i < matrix.size(); i++)
			L[i][i] = 1.0;
		for (int i = 0; i < matrix.size(); i++) {
			for (int j = 0; j < matrix[0].size(); j++) {
				if (i <= j) {
					U[i][j] = matrix[i][j];
					double tempSum = 0.0;
					for (int k = 0; k < i; k++) {
						tempSum += L[i][k] * U[k][j];
					}
					U[i][j] -= tempSum;
				}
				else {
					L[i][j] = matrix[i][j];
					double tempSum = 0.0;
					for (int k = 0; k < j; k++)
						tempSum += L[i][k] * U[k][j];
					L[i][j] -= tempSum;
					L[i][j] /= U[j][j];
				}
			}
		}

		std::vector<double> vectorTemp (matrix.size(), 0.0);

		//Now find the Y matrix using the L data
		for (int index = 0; index < matrix.size(); index++) {
			vectorTemp[index] = 1.0;
			for (int i = 0; i < matrix.size(); i++) {
				double temp = 0.0;
				for (int j = 0; j < i; j++) {
					temp += Y[j][index] * L[i][j];
				}
				Y[i][index] = vectorTemp[i] - temp;
			}
			vectorTemp[index] = 0.0;
		}
		//Now find the invert matrix using the Y and U data
		for (int index = 0; index < matrix.size(); index++) {
			for (int k = 0; k < matrix.size(); k++) {
				vectorTemp[k] = Y[k][index];
			}
			for (int i = matrix.size() - 1; i >= 0; i--) {
				double temp = 0.0;
				for (int j = matrix.size() - 1; j > i; j--) {
					temp += matrixRes[index][j] * U[i][j];
				}
				matrixRes[index][i] = (vectorTemp[i] - temp) / U[i][i];
			}
		}

		return matrixRes;
	}

	private: double polynomeRun(double x) {
		double y = 0.0;
		y += Double::Parse(polynomeCoefs[0]->ToString());
		y += Double::Parse(polynomeCoefs[1]->ToString()) * x;
		y += Double::Parse(polynomeCoefs[2]->ToString()) * System::Math::Pow(x, 2.0);
		y += Double::Parse(polynomeCoefs[3]->ToString()) * System::Math::Pow(x, 3.0);
		y += Double::Parse(polynomeCoefs[4]->ToString()) * System::Math::Pow(x, 4.0);
		y += Double::Parse(polynomeCoefs[5]->ToString()) * System::Math::Pow(x, 5.0);
		return y;
	}

	private: System::Void polynomeBuild(int width, double meanX, double meanY, double ModeY) {
		double medianX = 0;
		double medianY = 0;
		double modeX = 0;
		double modeY = ModeY;  //The peak zooming is fixed

		//Find the Mode and Median relative coordinates
		//The formula: mean - mode = 3 (mean - median)
		medianY = (modeY + 2 * meanY) / 3;

		for (int i = meanX + 1; i < width; i++) {
			modeX = 3 * i - 2 * meanX;
			if (modeX <= width && modeX >= meanX && modeX >= i && i >= meanX && i <= width) {
				medianX = i;
				break;
			}
		}

		//I use the part of the parabola to find some more points before mean value so the polynome's graph tail will be smoothed
		double parabolaCoef = meanY / System::Math::Pow(meanX, 2.0);
		int counter = 0;

		std::vector<double> tempXs;
		std::vector<double> tempYs;

		//Enter the points
		tempXs.push_back(0.0);
		tempYs.push_back(0.0);
		Xs->Add(0.0);
		Ys->Add(0.0);
		counter++;
		for (int i = 1; i < meanX; i += 2) {
			tempXs.push_back(i);
			tempYs.push_back(parabolaCoef * System::Math::Pow(i, 2.0));
			Xs->Add(i);
			Ys->Add(parabolaCoef * System::Math::Pow(i, 2.0));
			counter++;
		}
		tempXs.push_back(meanX);
		tempYs.push_back(meanY);
		Xs->Add(meanX);
		Ys->Add(meanY);
		counter++;
		tempXs.push_back(medianX);
		tempYs.push_back(medianY);
		Xs->Add(medianX);
		Ys->Add(medianY);
		counter++;
		tempXs.push_back(modeX);
		tempYs.push_back(modeY);
		Xs->Add(modeX);
		Ys->Add(modeY);
		counter++;
		tempXs.push_back(width);
		tempYs.push_back(0.0);
		Xs->Add(width);
		Ys->Add(0.0);
		counter++;

		//Init the matrix and the temp vector
		std::vector<std::vector<double>> matrix(counter, std::vector<double>(6, 0.0));

		//Ys vector - as [counter][1] matrix for multiplication to work
		std::vector<std::vector<double>> Yys(counter, std::vector<double>(1, 0.0));
		for (int i = 0; i < counter; i++)
			Yys[i][0] = tempYs[i];
		//The matrix's row structure is: 1 x x^2 x^3 ... x^N, N is the wanted power. Mine is 5
		for (int i = 0; i < matrix.size(); i++) {
			for (int j = 0; j < matrix[i].size(); j++) {
				matrix[i][j] = System::Math::Pow(tempXs[i], j);
			}
		}
		tempXs.clear();
		tempYs.clear();

		//The formula we need is coefs = (xTransp * x)inverse * xTransp * y
		std::vector<std::vector<double>> matrixTransposed(6, std::vector<double>(counter, 0.0));
		for (int i = 0; i < matrix.size(); i++) {
			for (int j = 0; j < matrix[i].size(); j++) {
				matrixTransposed[j][i] = matrix[i][j];
			}
		}
		std::vector<std::vector<double>> matrixMult = matrixMultiply(matrixTransposed, matrix);
		std::vector<std::vector<double>> matrixInv = matrixInvert(matrixMult);
		matrixMult = matrixMultiply(matrixInv, matrixTransposed);
		std::vector<std::vector<double>> vectorRes = matrixMultiply(matrixMult, Yys);
		//Result is going into the list of coefficients
		for (int i = 0; i < vectorRes.size(); i++)
			polynomeCoefs->Add(vectorRes[i][0]);

		//If there's too much of a distance between mode and the end, we need some more points
		if (width - modeX > 5) {
			for (int i = modeX + 1; i < width; i += 4) {
				Xs->Add(i);
				Ys->Add(polynomeRun(i));
			}
		}
	}

	private: System::Void ShockwaveDisplay(int x, int y, int radius, double angle) {
		//x and y are the coordinates of the explosion's epicenter
		//radius is, well, radius of the shockwave spread
		//angle is the angle we're looking at

		static const double PI = 3.1415926535;

		int wid = System::Convert::ToInt32(DistortionWidthTextBox->Text);  //distortionWidth must be stable
		if (radius - wid < 0) {  //the radius we need to draw at may be less than full distortion width
			//It won't be visible well anyway, so that won't be drawn
		}
		else {  //but I hope it will be less of a part. Here's where we go further out
			//Let's make this one
			//This is the distortion coefficient in the max
			double peakY = 0.0;

			//The program doesn't know how many points it already has. Dynamic arrays are here for this to work properly
			std::vector<int> arrayForX;
			std::vector<int> arrayForY;
			//Now I'll calculate the coordinates of the points
			for (int i = 0; i < Xs->Count; i++) {
				int xTemp = x + (radius - wid + Double::Parse(Xs[i]->ToString()->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture)) * cos(angle * PI / 180);
				int yTemp = y + (radius - wid + Double::Parse(Xs[i]->ToString()->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture)) * sin(angle * PI / 180);
				arrayForX.push_back(xTemp);
				arrayForY.push_back(yTemp);
				if (Double::Parse(Ys[i]->ToString()->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture) > peakY) {
					System::String^ string = Ys[i]->ToString()->Replace(',', '.');
					peakY = Double::Parse(string, System::Globalization::CultureInfo::InvariantCulture);
				}
			}
			int width = zoomedWidth;
			int height = zoomedHeight;
			//The size of a square to copy in future
			int sizeDefault = 5 * (peakY - 1 > 1 ? peakY - 1 : 1);
			int halfSize = System::Math::Floor((double)sizeDefault / 2.0);
			
			for (int i = 0; i < arrayForX.size(); i++) {
				int upLimit = 0;
				int leftLimit = 0;
				int xSize = 0;
				int ySize = 0;
				int scaledUpLimit = 0;
				int scaledLeftLimit = 0;
				int scaledXSize = 0;
				int scaledYSize = 0;

				if ((arrayForX[i] < 0 && arrayForX[i] + halfSize < 0) || (arrayForY[i] < 0 && arrayForY[i] + halfSize < 0) ||
					(arrayForX[i] >= width && arrayForX[i] - halfSize >= width) ||
					(arrayForY[i] >= height && arrayForY[i] - halfSize >= height)) {
					//Here the function breaks - no point in rescaling something we can't see
				}
				else {
					//Else, however, is pretty difficult
					//First we assume we don't see the point but we see part of the frames
					if ((arrayForX[i] < 0 || arrayForY[i] < 0) && arrayForX[i] + halfSize >= 0 && arrayForY[i] + halfSize >= 0) {
						upLimit = arrayForY[i] - halfSize >= 0 ? arrayForY[i] - halfSize : 0;
						leftLimit = arrayForX[i] - halfSize >= 0 ? arrayForX[i] - halfSize : 0;
						xSize = arrayForX[i] - leftLimit + halfSize < width ? arrayForX[i] - leftLimit + halfSize : width - leftLimit;
						ySize = arrayForY[i] - upLimit + halfSize < height ? arrayForY[i] - upLimit + halfSize : height - upLimit;
					}
					else if ((arrayForX[i] >= width || arrayForY[i] >= height) && arrayForX[i] - halfSize < width && arrayForY[i] - halfSize < height) {
						upLimit = arrayForY[i] - halfSize >= 0 ? arrayForY[i] - halfSize : 0;
						leftLimit = arrayForX[i] - halfSize >= 0 ? arrayForX[i] - halfSize : 0;
						xSize = width - leftLimit;
						ySize = height - upLimit;
					}
					//Now we assume we see the point, but the frames don't fit
					else if (arrayForX[i] >= 0 && arrayForX[i] < width && arrayForY[i] >= 0 && arrayForY[i] < height) {
						if (arrayForX[i] - halfSize <= 0 && arrayForY[i] - halfSize <= 0) {
							leftLimit = 0;
							upLimit = 0;
							xSize = abs(arrayForX[i] - halfSize) + halfSize;
							ySize = abs(arrayForY[i] - halfSize) + halfSize;
						}
						if (arrayForX[i] + halfSize >= width && arrayForY[i] - halfSize <= 0) {
							leftLimit = arrayForX[i] - halfSize;
							upLimit = 0;
							xSize = width - leftLimit - 1;
							ySize = abs(arrayForY[i] - halfSize) + halfSize;
						}
						if (arrayForX[i] - halfSize <= 0 && arrayForY[i] + halfSize >= height) {
							leftLimit = 0;
							upLimit = arrayForY[i] - halfSize;
							xSize = abs(arrayForX[i] - halfSize) + halfSize;
							ySize = height - upLimit;
						}
						if (arrayForX[i] + halfSize >= width && arrayForY[i] + halfSize >= height) {
							leftLimit = arrayForX[i] - halfSize;
							upLimit = arrayForY[i] - halfSize;
							xSize = width - leftLimit;
							ySize = height - upLimit;
						}
						//Or we'll assume the borders fit fine but there's trouble with rescaling
						//Nah, it's allright
						else if (arrayForX[i] - halfSize >= 0 && arrayForX[i] + halfSize < width &&
							arrayForY[i] - halfSize >= 0 && arrayForY[i] + halfSize < height) {
							leftLimit = arrayForX[i] - halfSize;
							upLimit = arrayForY[i] - halfSize;
							xSize = halfSize * 2;
							ySize = halfSize * 2;
						}
						//Or something failed
						else {
							leftLimit = 0;
							upLimit = 0;
							xSize = 0;
							ySize = 0;
						}
					}
					//Or something's wrong
					else {
						upLimit = 0;
						leftLimit = 0;
						xSize = 0;
						ySize = 0;
						scaledUpLimit = 0;
						scaledLeftLimit = 0;
						scaledXSize = 0;
						scaledYSize = 0;
					}

					//Scale it up
					double coef = Double::Parse(Ys[i]->ToString()->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
					if (coef < 1)
						coef = 1;
					//In case after everything it will still try to get outside the picture borders, we limit the border forcefully
					if (leftLimit + xSize >= width)
						xSize = width - leftLimit - 1;
					if (upLimit + ySize >= height)
						ySize = height - upLimit - 1;

					scaledUpLimit = arrayForY[i] - halfSize * coef + upPictureLimit;
					scaledLeftLimit = arrayForX[i] - halfSize * coef + leftPictureLimit;
					scaledXSize = xSize * coef;
					scaledYSize = ySize * coef;
					//Make rectangles that will be cloned and replaced
					Rectangle^ rect = gcnew Rectangle(leftLimit, upLimit, xSize, ySize);
					Rectangle^ scaledRect = gcnew Rectangle(scaledLeftLimit, scaledUpLimit, scaledXSize, scaledYSize);
					//OutOfMemory - fixed

					if (xSize != 0 && ySize != 0) {
						//Bitmaps and Graphics aren't thread-safe! Need to lock them both...
						System::Threading::Monitor::Enter(mapResized);
						System::Threading::Monitor::Enter(graph);
						//...then do the operation with one thread...
						Bitmap^ cloned = mapResized->Clone(*rect, System::Drawing::Imaging::PixelFormat::DontCare);  //clone
						//scale
						Bitmap^ cloned2 = gcnew Bitmap(cloned, scaledXSize, scaledYSize);
						int clonedX = cloned2->Width;
						int clonedY = cloned2->Height;
						//crop, leave only center the size of copied rectangle
						int differX = (scaledXSize - xSize) / 2;
						int differY = (scaledYSize - ySize) / 2;
						//OutOfMemory - fixed
						Rectangle^ rectCrop = gcnew Rectangle(differX, differY, xSize, ySize);
						Bitmap^ cloned3 = cloned2->Clone(*rectCrop, System::Drawing::Imaging::PixelFormat::DontCare);
						Rectangle^ rectDraw = gcnew Rectangle(leftLimit + leftPictureLimit, upLimit + upPictureLimit, xSize, ySize);
						//and draw
						//This one is slower, but allows to blur the picture afterwards
						for (int i = 0; i < xSize; i++) {
							for (int j = 0; j < ySize; j++) {
								Color color = cloned3->GetPixel(i, j);
								map->SetPixel(leftLimit + leftPictureLimit + i, upLimit + upPictureLimit + j, color);
							}
						}
						//Even though this one is faster, it won't allow to blur the picture afterwards
						//If you uncomment it, the ShockwaveBlur function must be heavily changed. Don't do this :)
						//graph->DrawImage(cloned3, *rectDraw);
						//...and unlock them for other threads
						System::Threading::Monitor::Exit(mapResized);
						System::Threading::Monitor::Exit(graph);
					}
				}
			}
		}
	}

	private: System::Void parallelBody(int i) {
		ShockwaveDisplay(ex, ey, tempRadius, (double)(i * 5));
	}

	private: System::Void ShockwaveBlur(int radius, int width) {
		//Kinda bruteforce method
		Color colTemp = Color::Black;

		int xBeg = ex + leftPictureLimit - radius >= leftPictureLimit ? ex + leftPictureLimit - radius : leftPictureLimit;
		int yBeg = ey + upPictureLimit - radius >= upPictureLimit ? ey + upPictureLimit - radius : upPictureLimit;
		int xEnd = ex + leftPictureLimit + radius < rightPictureLimit ? ex + leftPictureLimit + radius : rightPictureLimit;
		int yEnd = ey + upPictureLimit + radius < downPictureLimit ? ey + upPictureLimit + radius : downPictureLimit;
		for (int i1 = xBeg + 1; i1 < xEnd - 1; i1++) {
			for (int i2 = yBeg + 1; i2 < yEnd - 1; i2++) {
				int avgR = 0;
				int avgG = 0;
				int avgB = 0;
				int counter = 0;
				//3 by 3 is the square that will be averaged
				for (int i3 = i1 - 1; i3 < xEnd && i3 < i1 + 2; i3++) {
					for (int i4 = i2 - 1; i4 < yEnd && i4 < i2 + 2; i4++) {
						colTemp = map->GetPixel(i3, i4);
						if (colTemp.R != 0 && colTemp.G != 0 && colTemp.B != 0) {
							avgR += colTemp.R;
							avgG += colTemp.G;
							avgB += colTemp.B;
							counter++;
						}
					}
				}
				if (counter != 0) {
					avgR /= counter;
					avgG /= counter;
					avgB /= counter;

					Color newColor = Color::FromArgb(avgR, avgG, avgB);
					//Make sure the blur only happens inside the circle the effect is in
					bool detector1 = System::Math::Sqrt(System::Math::Pow(i1 - ex - leftPictureLimit, 2.0) + System::Math::Pow(i2 - ey - upPictureLimit, 2.0)) <= radius;
					bool detector2 = System::Math::Sqrt(System::Math::Pow(i1 - ex - leftPictureLimit, 2.0) + System::Math::Pow(i2 - ey - upPictureLimit, 2.0)) >= (radius - width);
					if (detector1 && detector2)
						map->SetPixel(i1, i2, newColor);
				}
			}
		}
	}

	private: System::Void LaunchButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Random^ rand = gcnew Random();
		pictureWidth = this->PictureBox->BackgroundImage->Width;
		pictureHeight = this->PictureBox->BackgroundImage->Height;
		boxWidth = this->PictureBox->Size.Width;
		boxHeight = this->PictureBox->Size.Height;
		pen = gcnew System::Drawing::Pen(Color::Red, System::Convert::ToInt32(DistortionWidthTextBox->Text));
		singlePen = gcnew System::Drawing::Pen(Color::Red, 1);
		solidBrush = gcnew System::Drawing::SolidBrush(Color::Transparent);
		map = gcnew Bitmap(boxWidth, boxHeight);
		map->MakeTransparent();

		int clientWidth = this->PictureBox->ClientSize.Width;
		double widthFactor = (double)pictureWidth / this->PictureBox->ClientSize.Width;
		double heightFactor = (double)pictureHeight / this->PictureBox->ClientSize.Height;
		double sizeFactor = Math::Max(widthFactor, heightFactor);
		zoomedPictWidth = pictureWidth / sizeFactor;
		zoomedPictHeight = pictureHeight / sizeFactor;

		System::Drawing::Size^ newSize = gcnew System::Drawing::Size(zoomedPictWidth, zoomedPictHeight);
		mapResized = gcnew Bitmap(this->PictureBox->BackgroundImage, *newSize);
		zoomedWidth = mapResized->Width;
		zoomedHeight = mapResized->Height;

		int widDif = boxWidth - zoomedPictWidth;
		int heigDif = boxHeight - zoomedPictHeight;

		leftPictureLimit = System::Math::Ceiling(widDif / 2);
		upPictureLimit = System::Math::Ceiling(heigDif / 2);
		rightPictureLimit = boxWidth - System::Math::Floor(widDif / 2);
		downPictureLimit = boxHeight - System::Math::Floor(heigDif / 2);

		ex = rand->Next(2, zoomedPictWidth);
		ey = rand->Next(2, zoomedPictHeight);
		
		int distortion = System::Convert::ToInt32(DistortionWidthTextBox->Text);
		if (distortion < 5) {
			distortion = 5;
			DistortionWidthTextBox->Text = distortion.ToString();
		}
		double distortPeakY = Double::Parse(DistortMeanTextBox->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
		if (distortPeakY < 2.0) {
			distortPeakY = 2.0;
			DistortMeanTextBox->Text = distortPeakY.ToString();
		}

		int radius = System::Convert::ToInt32(RadiusTextBox->Text);
		if (radius < 25) {
			radius = 25;
			RadiusTextBox->Text = radius.ToString();
		}

		double modeY = Double::Parse(DistortModeTextBox->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
		if (modeY <= keepMean) {
			modeY += 1.0;
			DistortModeTextBox->Text = modeY.ToString();
		}

		if (distortPeakY != keepMean) {
			keepMean = distortPeakY;
			polynomeBuild(distortion, ceil(distortion / 2), keepMean, modeY);
		}

		int numberOfProcessors;

		graph = System::Drawing::Graphics::FromImage(map);
		System::Drawing::Rectangle* drawRect = new System::Drawing::Rectangle(ex - 2 + leftPictureLimit, ey - 2 + upPictureLimit, 5, 5);
		graph->DrawRectangle(singlePen, *drawRect);
		System::Drawing::Rectangle* rect1;
		System::Drawing::Rectangle* rect2;
		if (widDif > heigDif) {
			rect1 = new System::Drawing::Rectangle(0, 0, leftPictureLimit + 2, downPictureLimit + 2);
			rect2 = new System::Drawing::Rectangle(rightPictureLimit, 0, boxWidth - rightPictureLimit, downPictureLimit);
		}
		else {
			rect1 = new System::Drawing::Rectangle(0, 0, rightPictureLimit - 1, upPictureLimit - 1);
			rect2 = new System::Drawing::Rectangle(0, downPictureLimit, rightPictureLimit, boxHeight - downPictureLimit);
		}
		if (radius != 0) {
			bool parallelEnabled = this->ParalRadioButton->Checked;
			if (parallelEnabled) { //if enabled, make parallel threads by number of processors
				numberOfProcessors = std::thread::hardware_concurrency();  //how many processors are there in your computer
			}
			else {//if disabled, use only one thread
				numberOfProcessors = 1;
			}
			for (int i = 5; i <= radius; i += 5) {
				tempRadius = i;
				graph->Clear(Color::Transparent);
				
				//Make a loop for both parallel and sequential. Parallel::For is allright
				Action<int>^ action = gcnew Action<int>(this, &GUI::parallelBody);
				ParallelOptions^ options = gcnew ParallelOptions();
				options->MaxDegreeOfParallelism = numberOfProcessors;
				Parallel::For((long long)0, (long long)72, options, action);  //System.Threading.Tasks library

				ShockwaveBlur(i + 2, distortion);
				System::Drawing::Rectangle* drawRect = new System::Drawing::Rectangle(ex - 2 + leftPictureLimit, ey - 2 + upPictureLimit, 5, 5);
				graph->DrawRectangle(singlePen, *drawRect);
				//Make box around the picture transparent
				graph->FillRectangle(solidBrush, *rect1);
				graph->FillRectangle(solidBrush, *rect2);
				this->PictureBox->Image = map;
				Refresh();
				if (i < radius) {
					double delay = Double::Parse(SpreadSpeedTextBox->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
					if (delay > 1.0)
						delay = 1.0;
					else if (delay < 0.0)
						delay = 0.0;
					delay *= CLOCKS_PER_SEC;
					clock_t now = clock();
					while (clock() - now < delay);
				}
			}
			int delay = System::Convert::ToInt32(KeepTextBox->Text);
			if (delay < 0)
				delay = 0;
			if (delay <= 20) {
				delay *= CLOCKS_PER_SEC;
				clock_t now = clock();
				while (clock() - now < delay);
				graph->Clear(Color::Transparent);
				this->PictureBox->Image = map;
			}
		}
	}

	private: System::Void DistortionWidthTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		int text = System::Convert::ToInt32(DistortionWidthTextBox->Text);
		text *= 5;
		RadiusTextBox->Text = text.ToString();
	}

	private: System::Void RadiusTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		int text = System::Convert::ToInt32(RadiusTextBox->Text);
		text /= 5;
		DistortionWidthTextBox->Text = text.ToString();
	}
};
}

#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	protected:

	protected:



	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ btnEquals;


	private: System::Windows::Forms::TextBox^ tbDisplay;
	private: System::Windows::Forms::Label^ lblShowOp;
	private: System::Windows::Forms::Button^ btnDot;
	private: System::Windows::Forms::Button^ btnBackSpace;
	private: System::Windows::Forms::Button^ btnCE;
	private: System::Windows::Forms::Button^ btnC;
	private: System::Windows::Forms::Button^ btnPM;










	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btnEquals = (gcnew System::Windows::Forms::Button());
			this->tbDisplay = (gcnew System::Windows::Forms::TextBox());
			this->lblShowOp = (gcnew System::Windows::Forms::Label());
			this->btnDot = (gcnew System::Windows::Forms::Button());
			this->btnBackSpace = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnPM = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn1
			// 
			this->btn1->Location = System::Drawing::Point(23, 326);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(72, 57);
			this->btn1->TabIndex = 0;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::buttonS_Number_Click);
			// 
			// btn2
			// 
			this->btn2->Location = System::Drawing::Point(101, 326);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(75, 57);
			this->btn2->TabIndex = 1;
			this->btn2->TabStop = false;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::buttonS_Number_Click);
			// 
			// btn3
			// 
			this->btn3->Location = System::Drawing::Point(182, 326);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(75, 57);
			this->btn3->TabIndex = 4;
			this->btn3->TabStop = false;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::buttonS_Number_Click);
			// 
			// btn9
			// 
			this->btn9->Location = System::Drawing::Point(182, 200);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(75, 57);
			this->btn9->TabIndex = 7;
			this->btn9->TabStop = false;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::buttonS_Number_Click);
			// 
			// btn8
			// 
			this->btn8->Location = System::Drawing::Point(101, 200);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(75, 57);
			this->btn8->TabIndex = 6;
			this->btn8->TabStop = false;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::buttonS_Number_Click);
			// 
			// btn7
			// 
			this->btn7->Location = System::Drawing::Point(23, 200);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(72, 57);
			this->btn7->TabIndex = 5;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::buttonS_Number_Click);
			// 
			// btn6
			// 
			this->btn6->Location = System::Drawing::Point(182, 263);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(75, 57);
			this->btn6->TabIndex = 10;
			this->btn6->TabStop = false;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::buttonS_Number_Click);
			// 
			// btn5
			// 
			this->btn5->Location = System::Drawing::Point(101, 263);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(75, 57);
			this->btn5->TabIndex = 9;
			this->btn5->TabStop = false;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::buttonS_Number_Click);
			// 
			// btn4
			// 
			this->btn4->Location = System::Drawing::Point(23, 263);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(72, 57);
			this->btn4->TabIndex = 8;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::buttonS_Number_Click);
			// 
			// btn0
			// 
			this->btn0->Location = System::Drawing::Point(23, 389);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(72, 57);
			this->btn0->TabIndex = 11;
			this->btn0->TabStop = false;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::buttonS_Number_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(263, 200);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 57);
			this->button1->TabIndex = 12;
			this->button1->TabStop = false;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::buttonS_Arithmetic_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(263, 263);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(72, 57);
			this->button2->TabIndex = 13;
			this->button2->TabStop = false;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::buttonS_Arithmetic_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(263, 326);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(72, 57);
			this->button3->TabIndex = 14;
			this->button3->TabStop = false;
			this->button3->Text = L"*";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::buttonS_Arithmetic_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(263, 389);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(72, 57);
			this->button4->TabIndex = 15;
			this->button4->TabStop = false;
			this->button4->Text = L"/";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::buttonS_Arithmetic_Click);
			// 
			// btnEquals
			// 
			this->btnEquals->Location = System::Drawing::Point(185, 389);
			this->btnEquals->Name = L"btnEquals";
			this->btnEquals->Size = System::Drawing::Size(72, 57);
			this->btnEquals->TabIndex = 16;
			this->btnEquals->TabStop = false;
			this->btnEquals->Text = L"=";
			this->btnEquals->UseVisualStyleBackColor = true;
			this->btnEquals->Click += gcnew System::EventHandler(this, &MyForm::btnEquals_Click);
			// 
			// tbDisplay
			// 
			this->tbDisplay->Location = System::Drawing::Point(12, 12);
			this->tbDisplay->Multiline = true;
			this->tbDisplay->Name = L"tbDisplay";
			this->tbDisplay->ReadOnly = true;
			this->tbDisplay->Size = System::Drawing::Size(385, 59);
			this->tbDisplay->TabIndex = 18;
			this->tbDisplay->Text = L"0";
			this->tbDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// lblShowOp
			// 
			this->lblShowOp->AutoSize = true;
			this->lblShowOp->BackColor = System::Drawing::Color::White;
			this->lblShowOp->Location = System::Drawing::Point(20, 15);
			this->lblShowOp->Name = L"lblShowOp";
			this->lblShowOp->Size = System::Drawing::Size(0, 13);
			this->lblShowOp->TabIndex = 19;
			// 
			// btnDot
			// 
			this->btnDot->Location = System::Drawing::Point(101, 389);
			this->btnDot->Name = L"btnDot";
			this->btnDot->Size = System::Drawing::Size(75, 57);
			this->btnDot->TabIndex = 20;
			this->btnDot->TabStop = false;
			this->btnDot->Text = L".";
			this->btnDot->UseVisualStyleBackColor = true;
			this->btnDot->Click += gcnew System::EventHandler(this, &MyForm::btnDot_Click);
			// 
			// btnBackSpace
			// 
			this->btnBackSpace->Location = System::Drawing::Point(23, 137);
			this->btnBackSpace->Name = L"btnBackSpace";
			this->btnBackSpace->Size = System::Drawing::Size(72, 57);
			this->btnBackSpace->TabIndex = 21;
			this->btnBackSpace->Text = L"BackSpace";
			this->btnBackSpace->UseVisualStyleBackColor = true;
			this->btnBackSpace->Click += gcnew System::EventHandler(this, &MyForm::btnBackSpace_Click);
			// 
			// btnCE
			// 
			this->btnCE->Location = System::Drawing::Point(101, 137);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(75, 57);
			this->btnCE->TabIndex = 22;
			this->btnCE->TabStop = false;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = true;
			this->btnCE->Click += gcnew System::EventHandler(this, &MyForm::btnCE_Click);
			// 
			// btnC
			// 
			this->btnC->Location = System::Drawing::Point(182, 137);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(75, 57);
			this->btnC->TabIndex = 23;
			this->btnC->TabStop = false;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = true;
			this->btnC->Click += gcnew System::EventHandler(this, &MyForm::btnC_Click);
			// 
			// btnPM
			// 
			this->btnPM->Location = System::Drawing::Point(263, 137);
			this->btnPM->Name = L"btnPM";
			this->btnPM->Size = System::Drawing::Size(72, 57);
			this->btnPM->TabIndex = 0;
			this->btnPM->Text = L"+/-";
			this->btnPM->Click += gcnew System::EventHandler(this, &MyForm::btnPM_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(409, 510);
			this->Controls->Add(this->btnPM);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->btnBackSpace);
			this->Controls->Add(this->btnDot);
			this->Controls->Add(this->lblShowOp);
			this->Controls->Add(this->tbDisplay);
			this->Controls->Add(this->btnEquals);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double iFirstNum;
		double iSecondNum;
		double iResult;
		String^ iOperator;

	private: System::Void btnC_Click(System::Object^ sender, System::EventArgs^ e) {
		tbDisplay->Text = "0";
		lblShowOp->Text = "";
	}

	private: System::Void btnCE_Click(System::Object^ sender, System::EventArgs^ e) {
		tbDisplay->Text = "0";
	}

	private: System::Void buttonS_Number_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ Numbers = safe_cast<Button^>(sender);
		if (tbDisplay->Text == "0")
			tbDisplay->Text = Numbers->Text;
		else
			tbDisplay->Text += Numbers->Text;
	}

	private: System::Void buttonS_Arithmetic_Click(System::Object^ sender, System::EventArgs^ e) {

		Button^ op = safe_cast<Button^>(sender);
		iFirstNum = Double::Parse(tbDisplay->Text);
		tbDisplay->Text = "0";
		iOperator = op->Text;
		lblShowOp->Text = System::Convert::ToString(iFirstNum) + " " + iOperator;
	}

	private: System::Void btnEquals_Click(System::Object^ sender, System::EventArgs^ e) {
	
		iSecondNum = Double::Parse(tbDisplay->Text);

		if (iOperator == "+") {
			iResult = iFirstNum + iSecondNum;
			lblShowOp->Text += " " + tbDisplay->Text + " = " + System::Convert::ToString(iResult);
			tbDisplay->Text = System::Convert::ToString(iResult);
		}
		else if (iOperator == "-") {
			iResult = iFirstNum - iSecondNum;
			lblShowOp->Text += " " + tbDisplay->Text + " = " + System::Convert::ToString(iResult);
			tbDisplay->Text = System::Convert::ToString(iResult);
		}
		else if (iOperator == "*") {
			iResult = iFirstNum * iSecondNum;
			lblShowOp->Text += " " + tbDisplay->Text + " = " + System::Convert::ToString(iResult);
			tbDisplay->Text = System::Convert::ToString(iResult);
		}
		else if (iOperator == "/") {
			iResult = iFirstNum / iSecondNum;
			lblShowOp->Text += " " + tbDisplay->Text + " = " + System::Convert::ToString(iResult);
			tbDisplay->Text = System::Convert::ToString(iResult);
		}

		iOperator = "";
	}

	private: System::Void btnBackSpace_Click(System::Object^ sender, System::EventArgs^ e) {

		if (tbDisplay->Text->Length > 1)
			tbDisplay->Text = tbDisplay->Text->Remove(tbDisplay->Text->Length - 1, 1);
		else
			tbDisplay->Text = "0";
	}

	private: System::Void btnDot_Click(System::Object^ sender, System::EventArgs^ e) {

		if (!tbDisplay->Text->Contains("."))
			tbDisplay->Text += ",";
	}

	private: System::Void btnPM_Click(System::Object^ sender, System::EventArgs^ e) {

		if (tbDisplay->Text->Contains("-"))
			tbDisplay->Text = tbDisplay->Text->Remove(0, 1);
		else
			tbDisplay->Text = "-" + tbDisplay->Text;
	}



};
}

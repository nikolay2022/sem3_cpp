#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(-4, 1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(154, 61);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Показать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// chart1
			// 
			chartArea2->AxisX->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(156, 1);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SemiTransparent;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"Заболевшие";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(979, 482);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1129, 475);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Lab4";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fname = "covid.csv"; //Путь файла
		array<double>^ V = gcnew array<double>(1000); //Число заболевших для каждой даты
		array<String^>^ D = gcnew array<String^>(1000); //Даты
		int c = 0;	//Кол-во вхождений
		String^ s;	//Строка для чтения файла
		try
		{
			IO::StreamReader^ din = IO::File::OpenText(fname);	//Открытие файла для чтения
			s = din->ReadLine();	//Чтение первой лишней строки
			while ((s = din->ReadLine()) != nullptr)
			{
				auto Two = s->Split(','); //Разделение на дату и кол-во заболевших, через ,
				V[c] = Double::Parse(Two[1]->Replace(".", ","));	//Добавление в массив с заменой . на , для правильного перевода в double
				D[c] = Two[0];	//Добавление в массив
				c++;
			}
		}
		catch (Exception^ e) { MessageBox::Show("Error!"); }
		chart1->ChartAreas[0]->AxisX->Maximum = c;	//Максимальная длинна оси X
		chart1->Series[0]->Points->DataBindXY(D, V);	//Указание массивов точек для chart (Даты по X, Заболевшие по Y)
	}
	};
}

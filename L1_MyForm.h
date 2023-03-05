#pragma once
#include<vector>
using namespace System::Collections::Generic;

namespace Lab1CG {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Сводка для L1_MyForm
	/// </summary>
	public ref class L1_MyForm : public System::Windows::Forms::Form
	{
	public:
		L1_MyForm(void)
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
		~L1_MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

	////////////////////////
	////////////////////////
	////////////////////////
	///////////////////////

	array<Point>^ coordTriangle = gcnew array<Point>(3);
	array<Point>^ coordRectangle = gcnew array<Point>(4);

	bool check;

	private: void Rectangle() {

		coordRectangle[0] = Point(Convert::ToInt32(textBox1->Text), Convert::ToInt32(textBox2->Text));
		coordRectangle[1] = Point(Convert::ToInt32(textBox3->Text), Convert::ToInt32(textBox4->Text));
		coordRectangle[2] = Point(Convert::ToInt32(textBox5->Text), Convert::ToInt32(textBox6->Text));
		coordRectangle[3] = Point(Convert::ToInt32(textBox7->Text), Convert::ToInt32(textBox8->Text));

		Paint();
	}

	private: void Triangle() {

		coordTriangle[0] = Point(Convert::ToInt32(textBox1->Text), Convert::ToInt32(textBox2->Text));
		coordTriangle[1] = Point(Convert::ToInt32(textBox3->Text), Convert::ToInt32(textBox4->Text));
		coordTriangle[2] = Point(Convert::ToInt32(textBox5->Text), Convert::ToInt32(textBox6->Text));

		Paint();
	}

	private: void AutoRectangle() {

		coordRectangle[0] = Point(10, 10);
		coordRectangle[1] = Point(100, 10);
		coordRectangle[2] = Point(100, 100);
		coordRectangle[3] = Point(10, 100);

		Paint();
	}

	private: void AutoTriangle() {

		coordTriangle[0] = Point(10, 10);
		coordTriangle[1] = Point(100, 10);
		coordTriangle[2] = Point(100, 100);

		Paint();
	}

	private: void Paint() {
		Graphics^ Графика = pictureBox1->CreateGraphics();
		pictureBox1->Refresh();

		int width = pictureBox1->Width; //размеры pictureBox
		int height = pictureBox1->Height;

		Графика->DrawLine(Pens::Black, width/2, 0, width/2, height); //y
		Графика->DrawLine(Pens::Black, 0, height/2, width, height/2); //x

		Графика->TranslateTransform(width / 2, height / 2);
		Графика->RotateTransform(-90);

		if (check) Графика->DrawPolygon(Pens::Black, coordRectangle);
		else Графика->DrawPolygon(Pens::Black, coordTriangle);
		
	}

	////////////////////////////////////
	////////////////////////////////////
	////////////////////////////////////

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(23, 26);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(765, 689);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(981, 439);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 42);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Рисовать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &L1_MyForm::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(822, 58);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(177, 28);
			this->comboBox1->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(822, 137);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(76, 26);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(923, 137);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(76, 26);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(822, 184);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(76, 26);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(923, 184);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(76, 26);
			this->textBox4->TabIndex = 5;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(822, 232);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(76, 26);
			this->textBox5->TabIndex = 8;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(923, 232);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(76, 26);
			this->textBox6->TabIndex = 7;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(822, 279);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(76, 26);
			this->textBox7->TabIndex = 10;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(923, 279);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(76, 26);
			this->textBox8->TabIndex = 9;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(1045, 58);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(177, 28);
			this->comboBox2->TabIndex = 11;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1106, 137);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(47, 39);
			this->button2->TabIndex = 12;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &L1_MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1106, 182);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(47, 39);
			this->button3->TabIndex = 13;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &L1_MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1068, 279);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(134, 43);
			this->button4->TabIndex = 14;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1068, 345);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(134, 43);
			this->button5->TabIndex = 15;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(829, 114);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 16;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1064, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 20);
			this->label2->TabIndex = 17;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1064, 256);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 20);
			this->label3->TabIndex = 18;
			this->label3->Text = L"label3";
			// 
			// L1_MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1303, 742);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"L1_MyForm";
			this->Text = L"L1_MyForm";
			this->Load += gcnew System::EventHandler(this, &L1_MyForm::L1_MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void L1_MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		comboBox1->Text = "Фигуры";
		array<System::String^>^ Figure = gcnew array<System::String^>{"Треугольник", "Прямоугольник"};
		comboBox1->Items->AddRange(Figure);

		comboBox2->Text = "Прорисовка";
		array<System::String^>^ Drawing = gcnew array<System::String^>{"Вручную", "Автоматически"};
		comboBox2->Items->AddRange(Drawing);

		button2->Text = "X";
		button3->Text = "Y";
		button4->Text = "Увеличить";
		button5->Text = "Уменьшить";

		label1->Text = "Задание координат";
		label2->Text = "Отображение отн-но оси";
		label3->Text = "Масштабирование";

	}



	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		switch (comboBox2->SelectedIndex)
		{
		case 0: //Вручную
			switch (comboBox1->SelectedIndex)
			{
			case 0: //треугольник
				Triangle();
				check = 0;
				break;
			case 1: //прямоугольник
				check = 1;
				Rectangle();
				break;
			}
			break;
		case 1: //автоматически
			switch (comboBox1->SelectedIndex)
			{
			case 0: //треугольник
				check = 0;
				AutoTriangle();
				break;
			case 1: //прямоугольник
				check = 1;
				AutoRectangle();
				break;
			}
			break;
		}

		
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //отображение относительно х
	if (check) {
		for (int i = 0; i < 4; i++) {
			int xa = (coordRectangle[i].X) * (-1) + (coordRectangle[i].Y) * 0;
			int ya = (coordRectangle[i].X) * 0 + (coordRectangle[i].Y) * (1);
			coordRectangle[i] = Point(xa, ya);
		}
	}
	else {
		for (int i = 0; i < 3; i++) {
			int xa = (coordRectangle[i].X) * (-1) + (coordRectangle[i].Y) * 0;
			int ya = (coordRectangle[i].X) * 0 + (coordRectangle[i].Y) * (1);
			coordRectangle[i] = Point(xa, ya);
		}
	}
	Paint();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check) {
		for (int i = 0; i < 4; i++) {
			int xa = (coordRectangle[i].X) * (1) + (coordRectangle[i].Y) * 0;
			int ya = (coordRectangle[i].X) * 0 + (coordRectangle[i].Y) * (-1);
			coordRectangle[i] = Point(xa, ya);
		}
	}
	else {
		for (int i = 0; i < 3; i++) {
			int xa = (coordRectangle[i].X) * (1) + (coordRectangle[i].Y) * 0;
			int ya = (coordRectangle[i].X) * 0 + (coordRectangle[i].Y) * (-1);
			coordRectangle[i] = Point(xa, ya);
		}
	}
	Paint();
}
};
}

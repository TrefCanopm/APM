#pragma once

namespace APM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для CreateSales
	/// </summary>
	public ref class CreateSales : public System::Windows::Forms::Form
	{
	public:
		CreateSales(void)
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
		~CreateSales()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: String^ FileName = "Fil Sales Order.txt";
	private: int i = 0;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(463, 205);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Создать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreateSales::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(37, 205);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CreateSales::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(191, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Создать бланк продажи";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Название товара";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(135, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Количество товара";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(302, 134);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 16);
			this->label4->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(383, 60);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(383, 88);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(383, 116);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1, 115);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(173, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Время до отгрузки в днях";
			// 
			// CreateSales
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(617, 253);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"CreateSales";
			this->Text = L"CreateSales";
			this->Load += gcnew System::EventHandler(this, &CreateSales::CreateSales_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void CreateSales_Load(System::Object^ sender, System::EventArgs^ e) 
{
	StreamReader^ file = File::OpenText(FileName);
	String^ line = file->ReadLine();
	while ((line != nullptr)&&(line != ""))
	{
		i++;
		line = file->ReadLine();
	}
	file->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	String^ Str = "";
	String^ er = "";
	String^ a = "";
	String^ b = "";
	String^ c = "";
	bool f = 1;
	bool A = 1, B = 1, C = 1;
	if (textBox1->Text == "")
	{
		er = er + "название товара, ";
		f = 0;
	}
	else
	{
		a = textBox1->Text;
	}
	if (textBox2->Text == "")
	{
		er = er + "количество материала, ";
		f = 0;
	}
	else
	{
		b = textBox2->Text;
	}
		if (textBox3->Text == "")
		{
			er = er + "время до отгрузки товара, ";
			f = 0;
		}
		else
		{
			c = textBox3->Text;
		}
	if (f)
	{
		StreamWriter^ file = gcnew StreamWriter(FileName, true);
		Str = (i + 1).ToString() + "-" + a + "-" + b + "-" + c + "-" + "\n";
		file->Write(Str);
		file->Close();
		i++;
	}
	else
	{
		MessageBox::Show(this, "Введите значение в полях " + er, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	textBox1->Text = "";
	textBox3->Text = "";
	textBox2->Text = "";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	i = 0;
	this->Close();
}
};
}

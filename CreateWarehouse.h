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
	/// Сводка для CreateWarehouse
	/// </summary>
	public ref class CreateWarehouse : public System::Windows::Forms::Form
	{
	public:
		CreateWarehouse(void)
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
		~CreateWarehouse()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button2;
	private: String^ FileName = "Fil Warehouse Resource.txt";
	private: int i = 0;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(172, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(313, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Создание элемента на складе ресурсов";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(326, 58);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(300, 22);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(428, 175);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(198, 35);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Добавить запись";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreateWarehouse::button1_Click);
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(12, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(285, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Нужно ли включить авто докупку\r\n";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(12, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(285, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Количество материала\r\n";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(12, 64);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(272, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Название материала";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(12, 138);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(285, 16);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Порог количества материала для докупки\r\n";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(326, 139);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(300, 22);
			this->textBox3->TabIndex = 8;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(326, 82);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(300, 22);
			this->textBox5->TabIndex = 10;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(326, 113);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(18, 17);
			this->checkBox1->TabIndex = 11;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(15, 175);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(145, 35);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CreateWarehouse::button2_Click);
			// 
			// CreateWarehouse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(638, 218);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"CreateWarehouse";
			this->Text = L"CreateWarehouse";
			this->Load += gcnew System::EventHandler(this, &CreateWarehouse::CreateWarehouse_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CreateWarehouse_Load(System::Object^ sender, System::EventArgs^ e) 
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
	bool d;
	String^ D = "";
	bool f = 1;
	bool A = 1, B = 1,C = 1;
	if (textBox1->Text == "")
	{
		er = er + "название материала, ";
		f = 0;
	}
	else
	{
		a = textBox1->Text;
	}
	if (textBox5->Text == "")
	{
		er = er + "количество материала, ";
		f = 0;
	}
	else
	{
		b = textBox5->Text;
	}
	if (checkBox1->Checked == 1)
	{
	 if (textBox3->Text == "")
	 {
		 er = er + "порог количества материала для докупки, ";

		 f = 0;
	 }
	 else
	 {
		 c = textBox3->Text;
	 }
	}
	d = checkBox1->Checked;
	if (f)
	{
		StreamWriter^ file = gcnew StreamWriter(FileName, true);
		if (d)
			D = "1";
		else
			D = "0";
		Str = (i+1).ToString()+"-"+ a + "-" + b + "-" + D + "-" + c + "-" + "\n";
		file->Write(Str);
		file->Close();
		i++;
	}
	else
	{
		MessageBox::Show(this, "Введите значение в полях "+er, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	textBox1->Text = "";
	textBox3->Text = "";
	checkBox1->Checked = 0;
	textBox5->Text = "";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Close();
	int i = 0;
}
};
}

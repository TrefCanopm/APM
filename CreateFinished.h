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
	/// Сводка для CreateFinished
	/// </summary>
	public ref class CreateFinished : public System::Windows::Forms::Form
	{
	public:
		CreateFinished(void)
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
		~CreateFinished()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: String^ FileName = "Fil Warehouse Finished.txt";
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(123, 81);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Название продукта";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 288);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Отмена";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreateFinished::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(423, 75);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(123, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(159, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Количество продукции";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(123, 153);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(163, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Нужнали афто продажа";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(123, 185);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(283, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Количество продукции для афто продажы";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(428, 150);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(95, 20);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(670, 288);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Создать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CreateFinished::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(423, 113);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(423, 180);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 10;
			// 
			// CreateFinished
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(757, 323);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"CreateFinished";
			this->Text = L"CreateFinished";
			this->Load += gcnew System::EventHandler(this, &CreateFinished::CreateFinished_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ Str = "";
		String^ er = "";
		String^ a = "";
		String^ b = "";
		String^ c = "";
		bool d;
		String^ D = "";
		bool f = 1;
		bool A = 1, B = 1, C = 1;
		if (textBox1->Text == "")
		{
			er = er + "название материала, ";
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
		if (checkBox1->Checked == 1)
		{
			if (textBox3->Text == "")
			{
				er = er + "порог количества материала для продажи, ";

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
			Str = (i + 1).ToString() + "-" + a + "-" + b + "-" + D + "-" + c + "-" + "\n";
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
		checkBox1->Checked = 0;
		textBox2->Text = "";
	}
private: System::Void CreateFinished_Load(System::Object^ sender, System::EventArgs^ e) 
{
	StreamReader^ file = File::OpenText(FileName);
	String^ line = file->ReadLine();
	while ((line != nullptr) && (line != ""))
	{
		i++;
		line = file->ReadLine();
	}
	file->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Close();
}
};
}

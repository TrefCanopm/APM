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
	/// Сводка для CreatePurchase
	/// </summary>
	public ref class CreatePurchase : public System::Windows::Forms::Form
	{
	public:
		CreatePurchase(void)
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
		~CreatePurchase()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: String^ FileName = "Fil Purchase Orders For Materials.txt";
	private: int i = 0;
	protected:

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(158, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(36, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Название товара";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(36, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(135, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Количество товара";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(36, 145);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(231, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Время до прибытия товара(в днях)";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(416, 218);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Создать заказ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreatePurchase::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 218);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CreatePurchase::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(286, 89);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(163, 22);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(286, 117);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(163, 22);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(286, 145);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(163, 22);
			this->textBox3->TabIndex = 8;
			// 
			// CreatePurchase
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(503, 253);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"CreatePurchase";
			this->Text = L"CreatePurchase";
			this->Load += gcnew System::EventHandler(this, &CreatePurchase::CreatePurchase_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void CreatePurchase_Load(System::Object^ sender, System::EventArgs^ e)
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
		String^ Str = "";
		String^ er = "";
		String^ a = "";
		String^ b = "";
		String^ c = "";
		bool f = 1;
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
			if (textBox3->Text == "")
			{
				er = er + "Время до прибытия товара.";

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
	this->Close();
}
};
}

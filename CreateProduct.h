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
	/// Сводка для CreateProduct
	/// </summary>
	public ref class CreateProduct : public System::Windows::Forms::Form
	{
	public:
		CreateProduct(void)
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
		~CreateProduct()
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
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;
	private: String^ FileName = "Fil Production.txt";
	private: int i = 0;
	private: System::Windows::Forms::Label^ label6;
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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(343, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Название сырья";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(393, 202);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(226, 39);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Создать процесс";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CreateProduct::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(376, 47);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(226, 22);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(376, 77);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(226, 22);
			this->textBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(343, 22);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Количество сырья";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(376, 105);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(226, 22);
			this->textBox3->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(343, 23);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Название готовой продукции";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(376, 134);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(226, 22);
			this->textBox4->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 133);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(343, 23);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Количество готовой продукции";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(376, 161);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(226, 22);
			this->textBox5->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 161);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(343, 25);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Время процесса(в днях)";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(12, 202);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(155, 39);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &CreateProduct::button2_Click);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(136, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(341, 22);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Создание записи производства";
			// 
			// CreateProduct
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(631, 253);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"CreateProduct";
			this->Text = L"Создание записи производства";
			this->Load += gcnew System::EventHandler(this, &CreateProduct::CreateProduct_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void CreateProduct_Load(System::Object^ sender, System::EventArgs^ e) 
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
	String^ d = "";
	String^ g = "";
	bool f = 1;
	if (textBox1->Text == "")
	{
		er = er + "название сырья, ";
		f = 0;
	}
	else
	{
		a = textBox1->Text;
	}
	if (textBox2->Text == "")
	{
		er = er + "количество сырья, ";
		f = 0;
	}
	else
	{
		b = textBox2->Text;
	}
		if (textBox3->Text == "")
		{
			er = er + "название готовой продукции, ";
			f = 0;
		}
		else
		{
			c = textBox3->Text;
		}
		if (textBox4->Text == "")
		{
			er = er + "количество готовой продукции, ";
			f = 0;
		}
		else
		{
			d = textBox4->Text;
		}
		if (textBox5->Text == "")
		{
			er = er + "";
			f = 0;
		}
		else
		{
			g = textBox5->Text;
		}
	if (f)
	{
		Str = (i + 1).ToString() + "-" + a + "-" + b + "-" + c + "-" + d + "-" + g + "-" + g +"-"+ "\n";
		StreamWriter^ file = gcnew StreamWriter(FileName, true);
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
	textBox4->Text = "";
	textBox5->Text = "";
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}
};
}

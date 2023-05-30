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
	private: System::Windows::Forms::Label^ label5;
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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(8, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(421, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Название продукта";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 198);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 44);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Отмена";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CreateFinished::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(456, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(248, 22);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(8, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(421, 22);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Количество продукции";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(8, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(421, 19);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Нужнали афто продажа";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(8, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(421, 22);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Количество продукции для афто продажы";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(456, 126);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(18, 17);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(497, 198);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(207, 44);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Создать";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &CreateFinished::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(456, 94);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(248, 22);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(456, 149);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(248, 22);
			this->textBox3->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(163, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(384, 32);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Создание записи о готовых товарах";
			// 
			// CreateFinished
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(719, 254);
			this->Controls->Add(this->label5);
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
			this->Text = L"Создание записи готовых товаров";
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

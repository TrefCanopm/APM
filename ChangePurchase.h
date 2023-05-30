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
	/// Сводка для ChangePurchase
	/// </summary>
	public ref class ChangePurchase : public System::Windows::Forms::Form
	{
	public:
		ChangePurchase(void)
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
		~ChangePurchase()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: String^ str = "";
	private: String^ FileName = "Fil Purchase Orders For Materials.txt";
	private: int K = 0;
	private: bool f = 1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(238, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Введите номер элемента ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(270, 9);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(187, 22);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(375, 86);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(228, 22);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(375, 119);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(228, 22);
			this->textBox3->TabIndex = 4;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(375, 155);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(228, 22);
			this->textBox4->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(463, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 27);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Поиск";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ChangePurchase::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(16, 196);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 45);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ChangePurchase::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(342, 196);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(287, 45);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Применить изменения";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &ChangePurchase::button3_Click);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(22, 155);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(329, 22);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Время до отгрузки:";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(22, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(329, 22);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Количество продукции:";
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(22, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(329, 22);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Название продоваемой продукции:";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(155, 51);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(335, 24);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Данные в найденной записи:";
			// 
			// ChangePurchase
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(641, 253);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Name = L"ChangePurchase";
			this->Text = L"Изменение заказа на покупку материалла";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (textBox1->Text == "")
		{
			MessageBox::Show(this, "Введите номер элемента!!!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			StreamReader^ file = File::OpenText(FileName);
			String^ a;
			String^ line;
			while (f)
			{
				line = file->ReadLine();
				for (int i = 0; line[i] != '-'; i++)
				{
					a = a + line[i];
				}
				if (a == textBox1->Text)
				{
					f = 0;
				}
				else
				{
					str = line + "\n";
				}
				K++;
				a = "";

			}
			file->Close();
			if (!f)
			{
				int N = 0;
				for (int i = 0; i < line->Length; i++)
				{
					if (line[i] != '-')
					{
						a += line[i];
					}
					else
					{
						switch (N)
						{
						case 1: textBox2->Text = a; break;
						case 2: textBox3->Text = a; break;
						case 3: textBox4->Text = a; break;
						}
						N++;
						a = "";
					}
				}
			}
			else
			{
				MessageBox::Show(this, "Элемента с введённым номер нет в таблице", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (!f)
	{
		String^ a = textBox1->Text + "-" + textBox2->Text + "-" + textBox3->Text + "-" + textBox4->Text + "-";
		StreamReader^ file = File::OpenText(FileName);
		String^ line = "";
		for (int i = 0; i < K + 1; i++)
		{
			line = file->ReadLine();
		}
		str += a + "\n";
		while ((line != nullptr) && (line != ""))
		{
			str += line + "\n";
			line = file->ReadLine();
		}
		file->Close();
		File::Delete(FileName);
		StreamWriter^ file1 = File::CreateText(FileName);
		file1->Write(str);
		file1->Close();
	}
	else
	{
		MessageBox::Show(this, "Нельзя изменить не найденный элемент.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	f = 1;
	K = 0;
	str = "";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}
};
}

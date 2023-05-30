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
	/// Сводка для ChangeProduct
	/// </summary>
	public ref class ChangeProduct : public System::Windows::Forms::Form
	{
	public:
		ChangeProduct(void)
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
		~ChangeProduct()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: String^ FileName = "Fil Production.txt";
	private: String^ str = "";
	private: String^ S = "";
	private: bool f = 1;
	private: int K = 0;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(529, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(192, 25);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Поиск";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ChangeProduct::button1_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(326, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введите номер записи которую нужно изменить";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(360, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(140, 22);
			this->textBox1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(11, 318);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(149, 50);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ChangeProduct::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(413, 318);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(308, 50);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Применить изменения";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &ChangeProduct::button3_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(254, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(299, 30);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Данные найденной записи";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(434, 140);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(287, 22);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(434, 168);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(287, 22);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(434, 196);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(287, 22);
			this->textBox4->TabIndex = 8;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(434, 224);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(287, 22);
			this->textBox5->TabIndex = 9;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(434, 252);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(287, 22);
			this->textBox6->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(392, 22);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Название сырья";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 168);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(392, 22);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Количество сырья";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 196);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(392, 22);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Название готового продукта";
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 224);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(392, 22);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Количество готовой продукции за процесс";
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(12, 252);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(392, 22);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Время процесса( в днях)";
			// 
			// ChangeProduct
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(734, 380);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"ChangeProduct";
			this->Text = L"Изменение записии о производстве";
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
					case 3: textBox4->Text = a;	break;
					case 4: textBox5->Text = a; break;
					case 5: textBox6->Text = a; break;
					case 6: S = a; break;
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
			String^ a = textBox1->Text + "-" + textBox2->Text + "-" + textBox3->Text + "-" + textBox4->Text + "-" + textBox5->Text + "-" + textBox6->Text + "-"+ S+"-";
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
		textBox5->Text = "";
		textBox6->Text = "";
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

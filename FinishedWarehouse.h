#pragma once

#include "CreateFinished.h"
#include "DelFinished.h"
#include "ChangeFinished.h"

namespace APM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Сводка для FinishedWarehouse
	/// </summary>
	public ref class FinishedWarehouse : public System::Windows::Forms::Form
	{
	public:
		FinishedWarehouse(void)
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
		~FinishedWarehouse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ Table;
	protected:

	protected:






	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: String^ FileName = "Fil Warehouse Finished.txt";
	private: int I = 0;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;






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
			this->Table = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table))->BeginInit();
			this->SuspendLayout();
			// 
			// Table
			// 
			this->Table->AllowUserToAddRows = false;
			this->Table->AllowUserToDeleteRows = false;
			this->Table->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->Table->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5
			});
			this->Table->Location = System::Drawing::Point(12, 12);
			this->Table->MinimumSize = System::Drawing::Size(10, 0);
			this->Table->Name = L"Table";
			this->Table->ReadOnly = true;
			this->Table->RowHeadersWidth = 51;
			this->Table->RowTemplate->Height = 24;
			this->Table->Size = System::Drawing::Size(1460, 366);
			this->Table->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(10, 384);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(1460, 55);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Добавить запись о продукте";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FinishedWarehouse::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(12, 445);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(1460, 55);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Изменить запись о продукте";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FinishedWarehouse::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(10, 506);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(1460, 55);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Удалить запись о продукте";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &FinishedWarehouse::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(12, 567);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(1460, 55);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Обновить таблицу";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &FinishedWarehouse::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(10, 631);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(1460, 55);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Закрыть окно";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &FinishedWarehouse::button5_Click);
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column1->HeaderText = L"№";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 30;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Название товара";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Количество товара";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Нужна ли автопродажа";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Порог количества элементов для автопродажи";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// FinishedWarehouse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(1482, 688);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Table);
			this->Name = L"FinishedWarehouse";
			this->Text = L"Склад готовой продукции";
			this->Load += gcnew System::EventHandler(this, &FinishedWarehouse::FinishedWarehouse_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void FinishedWarehouse_Load(System::Object^ sender, System::EventArgs^ e) 
{
	String^ a;
	String^ b;
	String^ c;
	bool d;
	String^ f;
	StreamReader^ file = File::OpenText(FileName);
	String^ line = file->ReadLine();
	while ((line != nullptr) && (line != ""))
	{
		int k = 0;
		int i = 0;
		while (line->Length > k)
		{
			if (line[k] != '-')
			{
				switch (i)
				{
				case 0: a += line[k]; break;
				case 1: b += line[k]; break;
				case 2: c += line[k]; break;
				case 3: if (line[k] == '1') d = 1; else d = 0; break;
				case 4: f += line[k]; break;
				}
			}
			else
			{
				if (i == 4)
					Table->Rows->Add(a, b, c, d, f);
				i++;
			}
			k++;
		}
		a = b = c = f =  "";
		line = file->ReadLine();
		I++;
	}
	file->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	CreateFinished^ form = gcnew CreateFinished;
	form->Show();
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ChangeFinished^ form = gcnew ChangeFinished;
	form->Show();
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	DelFinished^ form = gcnew DelFinished;
	form->Show();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (I > 0)
	{
		for (int i = 0; i < I;i++)
		{
			Table->Rows->RemoveAt(0);
		}
	}
	String^ a;
	String^ b;
	String^ c;
	bool d;
	String^ f;
	StreamReader^ file = File::OpenText(FileName);
	String^ line = file->ReadLine();
	I = 0;
	while ((line != nullptr) && (line != ""))
	{
		int k = 0;
		int i = 0;
		while (line->Length > k)
		{
			if (line[k] != '-')
			{
				switch (i)
				{
				case 0: a += line[k]; break;
				case 1: b += line[k]; break;
				case 2: c += line[k]; break;
				case 3:; if (line[k] == '1') d = 1; else d = 0; break;
				case 4: f += line[k]; break;
				}
			}
			else
			{
				if (i == 4)
					Table->Rows->Add(a, b, c, d, f);
				i++;
			}
			k++;
		}
		a = b = c = f = "";
		line = file->ReadLine();
		I++;
	}
	file->Close();
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Close();
}
};
}

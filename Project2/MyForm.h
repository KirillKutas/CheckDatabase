#pragma once
/////////////////////////////////////////////////////////////////
#include "Source.h"
/////////////////////////////////////////////////////////////////
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^  Template;
	private: System::Windows::Forms::RadioButton^  Mail;
	private: System::Windows::Forms::RadioButton^  PhotoName;
	private: System::Windows::Forms::RadioButton^  Text1;
	private: System::Windows::Forms::RadioButton^  Text2;


	private: System::Windows::Forms::Button^  OpenFile;

	protected:

	protected:









	private: System::Windows::Forms::Button^  SaveLog;
	private: System::Windows::Forms::RadioButton^  Text3;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;





	private:
	protected:

	protected:









	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Template = (gcnew System::Windows::Forms::RadioButton());
			this->Mail = (gcnew System::Windows::Forms::RadioButton());
			this->PhotoName = (gcnew System::Windows::Forms::RadioButton());
			this->Text1 = (gcnew System::Windows::Forms::RadioButton());
			this->Text2 = (gcnew System::Windows::Forms::RadioButton());
			this->OpenFile = (gcnew System::Windows::Forms::Button());
			this->SaveLog = (gcnew System::Windows::Forms::Button());
			this->Text3 = (gcnew System::Windows::Forms::RadioButton());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// Template
			// 
			this->Template->AutoSize = true;
			this->Template->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->Template->Font = (gcnew System::Drawing::Font(L"MV Boli", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Template->Location = System::Drawing::Point(181, 174);
			this->Template->Name = L"Template";
			this->Template->Size = System::Drawing::Size(93, 23);
			this->Template->TabIndex = 0;
			this->Template->TabStop = true;
			this->Template->Text = L"Template";
			this->Template->UseVisualStyleBackColor = false;
			this->Template->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Template_CheckedChanged);
			// 
			// Mail
			// 
			this->Mail->AutoSize = true;
			this->Mail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->Mail->Font = (gcnew System::Drawing::Font(L"MV Boli", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Mail->Location = System::Drawing::Point(181, 221);
			this->Mail->Name = L"Mail";
			this->Mail->Size = System::Drawing::Size(76, 23);
			this->Mail->TabIndex = 1;
			this->Mail->TabStop = true;
			this->Mail->Text = L"E-mail";
			this->Mail->UseVisualStyleBackColor = false;
			this->Mail->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Mail_CheckedChanged);
			// 
			// PhotoName
			// 
			this->PhotoName->AutoSize = true;
			this->PhotoName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->PhotoName->Font = (gcnew System::Drawing::Font(L"MV Boli", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PhotoName->Location = System::Drawing::Point(181, 265);
			this->PhotoName->Name = L"PhotoName";
			this->PhotoName->Size = System::Drawing::Size(119, 23);
			this->PhotoName->TabIndex = 2;
			this->PhotoName->TabStop = true;
			this->PhotoName->Text = L"Photo Name";
			this->PhotoName->UseVisualStyleBackColor = false;
			this->PhotoName->CheckedChanged += gcnew System::EventHandler(this, &MyForm::PhotoName_CheckedChanged);
			// 
			// Text1
			// 
			this->Text1->AutoSize = true;
			this->Text1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->Text1->Font = (gcnew System::Drawing::Font(L"MV Boli", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Text1->Location = System::Drawing::Point(181, 312);
			this->Text1->Name = L"Text1";
			this->Text1->Size = System::Drawing::Size(66, 23);
			this->Text1->TabIndex = 3;
			this->Text1->TabStop = true;
			this->Text1->Text = L"Text1";
			this->Text1->UseVisualStyleBackColor = false;
			this->Text1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Text1_CheckedChanged);
			// 
			// Text2
			// 
			this->Text2->AutoSize = true;
			this->Text2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->Text2->Font = (gcnew System::Drawing::Font(L"MV Boli", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Text2->Location = System::Drawing::Point(181, 359);
			this->Text2->Name = L"Text2";
			this->Text2->Size = System::Drawing::Size(66, 23);
			this->Text2->TabIndex = 4;
			this->Text2->TabStop = true;
			this->Text2->Text = L"Text2";
			this->Text2->UseVisualStyleBackColor = false;
			this->Text2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Text2_CheckedChanged);
			// 
			// OpenFile
			// 
			this->OpenFile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->OpenFile->FlatAppearance->BorderSize = 0;
			this->OpenFile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->OpenFile->Font = (gcnew System::Drawing::Font(L"MV Boli", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->OpenFile->ForeColor = System::Drawing::SystemColors::Desktop;
			this->OpenFile->Location = System::Drawing::Point(86, 44);
			this->OpenFile->Name = L"OpenFile";
			this->OpenFile->Size = System::Drawing::Size(155, 34);
			this->OpenFile->TabIndex = 5;
			this->OpenFile->Text = L"Open File";
			this->OpenFile->UseVisualStyleBackColor = false;
			this->OpenFile->Click += gcnew System::EventHandler(this, &MyForm::OpenFile_Click);
			// 
			// SaveLog
			// 
			this->SaveLog->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->SaveLog->FlatAppearance->BorderSize = 0;
			this->SaveLog->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SaveLog->Font = (gcnew System::Drawing::Font(L"MV Boli", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SaveLog->Location = System::Drawing::Point(213, 512);
			this->SaveLog->Name = L"SaveLog";
			this->SaveLog->Size = System::Drawing::Size(164, 43);
			this->SaveLog->TabIndex = 6;
			this->SaveLog->Text = L"Save Log";
			this->SaveLog->UseVisualStyleBackColor = false;
			this->SaveLog->Click += gcnew System::EventHandler(this, &MyForm::SaveLog_Click);
			// 
			// Text3
			// 
			this->Text3->AutoSize = true;
			this->Text3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->Text3->Font = (gcnew System::Drawing::Font(L"MV Boli", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Text3->Location = System::Drawing::Point(181, 406);
			this->Text3->Name = L"Text3";
			this->Text3->Size = System::Drawing::Size(66, 23);
			this->Text3->TabIndex = 7;
			this->Text3->TabStop = true;
			this->Text3->Text = L"Text3";
			this->Text3->UseVisualStyleBackColor = false;
			this->Text3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Text3_CheckedChanged);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			openFileDialog1->Filter = "csv files (*.csv)|*.csv|All files (*.*)|*.*";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(407, 610);
			this->Controls->Add(this->Text3);
			this->Controls->Add(this->SaveLog);
			this->Controls->Add(this->OpenFile);
			this->Controls->Add(this->Text2);
			this->Controls->Add(this->Text1);
			this->Controls->Add(this->PhotoName);
			this->Controls->Add(this->Mail);
			this->Controls->Add(this->Template);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String ^fname1;
         public: System::Void OpenFile_Click(System::Object^  sender, System::EventArgs^  e) {
			 openFileDialog1->ShowDialog();
			 fname1 = openFileDialog1->FileName;
         }
		 private: System::Void Text3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 char a = 'c';
			 SelectColumn(a);
		 }
		 private: System::Void Template_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 char a = 't';
			 SelectColumn(a);
		 }
		 private: System::Void Text1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 char a = 'n';
			 SelectColumn(a);
		 }
		 private: System::Void Text2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 char a = 's';
			 SelectColumn(a);
		 }
		 private: System::Void Mail_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 char a = 'm';
			 SelectColumn(a);
		 }
		 private: System::Void PhotoName_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 char a = 'p';
			 SelectColumn(a);
		 }
		 private: System::Void SaveLog_Click(System::Object^  sender, System::EventArgs^  e) {
			 Savelog(fname1);
			 
		 }
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}

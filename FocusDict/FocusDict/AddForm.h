#pragma once
#include <msclr\marshal_cppstd.h>
#include <string>
#include <vector>
#include "Hash.h"
using namespace std;

namespace FocusDict {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddForm
	/// </summary>
	public ref class AddForm : public System::Windows::Forms::Form
	{
	public:
		AddForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Word* w = new Word();
		TYPE* t = new TYPE();
		Hash* hash = new Hash();

		int isValid()
		{
			if (w->word == "" || w->type->type_name == "" || w->type->meanings.size() == 0)	return 0;
			return 1;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ WordTextbox;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TypeTextbox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ MeaningTextbox;
	private: System::Windows::Forms::Button^ AddMeaningbtn;
	private: System::Windows::Forms::RichTextBox^ ExRichTextbox;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ AddWordbtn;
	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->WordTextbox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TypeTextbox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->MeaningTextbox = (gcnew System::Windows::Forms::TextBox());
			this->AddMeaningbtn = (gcnew System::Windows::Forms::Button());
			this->ExRichTextbox = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->AddWordbtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter the word";
			// 
			// WordTextbox
			// 
			this->WordTextbox->Location = System::Drawing::Point(93, 9);
			this->WordTextbox->Name = L"WordTextbox";
			this->WordTextbox->Size = System::Drawing::Size(219, 20);
			this->WordTextbox->TabIndex = 1;
			this->WordTextbox->TextChanged += gcnew System::EventHandler(this, &AddForm::WordTextbox_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Type";
			// 
			// TypeTextbox
			// 
			this->TypeTextbox->Location = System::Drawing::Point(93, 40);
			this->TypeTextbox->Name = L"TypeTextbox";
			this->TypeTextbox->Size = System::Drawing::Size(219, 20);
			this->TypeTextbox->TabIndex = 3;
			this->TypeTextbox->TextChanged += gcnew System::EventHandler(this, &AddForm::TypeTextbox_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(90, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Meaning";
			// 
			// MeaningTextbox
			// 
			this->MeaningTextbox->Location = System::Drawing::Point(12, 92);
			this->MeaningTextbox->Name = L"MeaningTextbox";
			this->MeaningTextbox->Size = System::Drawing::Size(217, 20);
			this->MeaningTextbox->TabIndex = 5;
			this->MeaningTextbox->TextChanged += gcnew System::EventHandler(this, &AddForm::MeaningTextbox_TextChanged);
			// 
			// AddMeaningbtn
			// 
			this->AddMeaningbtn->Location = System::Drawing::Point(77, 133);
			this->AddMeaningbtn->Name = L"AddMeaningbtn";
			this->AddMeaningbtn->Size = System::Drawing::Size(76, 37);
			this->AddMeaningbtn->TabIndex = 6;
			this->AddMeaningbtn->Text = L"Add Meaning";
			this->AddMeaningbtn->UseVisualStyleBackColor = true;
			this->AddMeaningbtn->Click += gcnew System::EventHandler(this, &AddForm::AddMeaningbtn_Click);
			// 
			// ExRichTextbox
			// 
			this->ExRichTextbox->Location = System::Drawing::Point(285, 92);
			this->ExRichTextbox->Name = L"ExRichTextbox";
			this->ExRichTextbox->Size = System::Drawing::Size(232, 131);
			this->ExRichTextbox->TabIndex = 7;
			this->ExRichTextbox->Text = L"";
			this->ExRichTextbox->TextChanged += gcnew System::EventHandler(this, &AddForm::ExRichTextbox_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(367, 73);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Examples";
			// 
			// AddWordbtn
			// 
			this->AddWordbtn->Location = System::Drawing::Point(193, 229);
			this->AddWordbtn->Name = L"AddWordbtn";
			this->AddWordbtn->Size = System::Drawing::Size(159, 31);
			this->AddWordbtn->TabIndex = 9;
			this->AddWordbtn->Text = L"Add Word";
			this->AddWordbtn->UseVisualStyleBackColor = true;
			this->AddWordbtn->Click += gcnew System::EventHandler(this, &AddForm::AddWordbtn_Click);
			// 
			// AddForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(537, 273);
			this->Controls->Add(this->AddWordbtn);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->ExRichTextbox);
			this->Controls->Add(this->AddMeaningbtn);
			this->Controls->Add(this->MeaningTextbox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TypeTextbox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->WordTextbox);
			this->Controls->Add(this->label1);
			this->Name = L"AddForm";
			this->Text = L"AddForm";
			this->Load += gcnew System::EventHandler(this, &AddForm::AddForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FlowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void WordTextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TypeTextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MeaningTextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void AddMeaningbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	//MeaningAdd* meaningadd = new MeaningAdd();
	if (WordTextbox->Text == "" || TypeTextbox->Text == "" || MeaningTextbox->Text == "" || ExRichTextbox->Text == "") {
		MessageBox::Show("Error!!!");
	}
	else {
		std::string s = msclr::interop::marshal_as<std::string>(TypeTextbox->Text);
		if (t->meanings.size() == 0) {
			t = hash->createType(s);
		}
		s = msclr::interop::marshal_as<std::string>(MeaningTextbox->Text);
		//meaningadd->def = s;
		Meaning* m = hash->createMeaning(s);
		for (int i = 0; i < ExRichTextbox->Lines->Length; i++) {
			String^ dumb = ExRichTextbox->Lines[i];
			s = msclr::interop::marshal_as<std::string>(dumb);
			//meaningadd->example.push_back(s);
			if (s != "") m->example.push_back(s);
		}
		//typeadd->meanings.push_back(meaningadd);
		t->meanings.push_back(m);
		MeaningTextbox->Clear();
		ExRichTextbox->Clear();
	}
}
private: System::Void ExRichTextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AddWordbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (WordTextbox->Text == "" || TypeTextbox->Text == "" || t->meanings.size() == 0) {
		MessageBox::Show("Not successful!");
	}
	else {
		//typeadd->type_name = s;
		std::string s = msclr::interop::marshal_as<std::string>(WordTextbox->Text);
		w = hash->createWord(s,t);
		//hash->addTable(w);
		//hash->updateFile();
		//word->word = s;
		//word->type = typeadd;
		MessageBox::Show("Successful!");
		this->Hide();
	}
}
private: System::Void AddForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}

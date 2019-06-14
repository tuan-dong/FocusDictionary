#pragma once
#include <msclr\marshal_cppstd.h>
#include "AddForm.h"
#include "EditForm.h"
#include "Hash.h"

namespace FocusDict {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	Hash* hash = new Hash();
	/// <summary>
	/// Summary for FocusDict
	/// </summary>
	public ref class FocusDict : public System::Windows::Forms::Form
	{
	public:
		FocusDict(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FocusDict()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ Wordlist;
	private: System::Windows::Forms::TextBox^ Input;
	private: System::Windows::Forms::Button^ Searchbtn;
	private: System::Windows::Forms::Button^ Addbtn;
	private: System::Windows::Forms::Button^ Deletebtn;
	private: System::Windows::Forms::Button^ Editbtn;
	private: System::Windows::Forms::RichTextBox^ ContentRichTxt;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;




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
			this->Wordlist = (gcnew System::Windows::Forms::ListBox());
			this->Input = (gcnew System::Windows::Forms::TextBox());
			this->Searchbtn = (gcnew System::Windows::Forms::Button());
			this->Addbtn = (gcnew System::Windows::Forms::Button());
			this->Deletebtn = (gcnew System::Windows::Forms::Button());
			this->Editbtn = (gcnew System::Windows::Forms::Button());
			this->ContentRichTxt = (gcnew System::Windows::Forms::RichTextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// Wordlist
			// 
			this->Wordlist->FormattingEnabled = true;
			this->Wordlist->Location = System::Drawing::Point(12, 101);
			this->Wordlist->Name = L"Wordlist";
			this->Wordlist->Size = System::Drawing::Size(277, 212);
			this->Wordlist->TabIndex = 0;
			this->Wordlist->SelectedIndexChanged += gcnew System::EventHandler(this, &FocusDict::Wordlist_SelectedIndexChanged);
			// 
			// Input
			// 
			this->Input->Location = System::Drawing::Point(18, 20);
			this->Input->Name = L"Input";
			this->Input->Size = System::Drawing::Size(270, 20);
			this->Input->TabIndex = 1;
			this->Input->TextChanged += gcnew System::EventHandler(this, &FocusDict::Input_TextChanged);
			// 
			// Searchbtn
			// 
			this->Searchbtn->Location = System::Drawing::Point(306, 17);
			this->Searchbtn->Name = L"Searchbtn";
			this->Searchbtn->Size = System::Drawing::Size(94, 25);
			this->Searchbtn->TabIndex = 2;
			this->Searchbtn->Text = L"Search";
			this->Searchbtn->UseVisualStyleBackColor = true;
			this->Searchbtn->Click += gcnew System::EventHandler(this, &FocusDict::Searchbtn_Click);
			// 
			// Addbtn
			// 
			this->Addbtn->Location = System::Drawing::Point(436, 15);
			this->Addbtn->Name = L"Addbtn";
			this->Addbtn->Size = System::Drawing::Size(99, 29);
			this->Addbtn->TabIndex = 3;
			this->Addbtn->Text = L"Add";
			this->Addbtn->UseVisualStyleBackColor = true;
			this->Addbtn->Click += gcnew System::EventHandler(this, &FocusDict::Addbtn_Click);
			// 
			// Deletebtn
			// 
			this->Deletebtn->Location = System::Drawing::Point(565, 16);
			this->Deletebtn->Name = L"Deletebtn";
			this->Deletebtn->Size = System::Drawing::Size(92, 28);
			this->Deletebtn->TabIndex = 4;
			this->Deletebtn->Text = L"Delete";
			this->Deletebtn->UseVisualStyleBackColor = true;
			this->Deletebtn->Click += gcnew System::EventHandler(this, &FocusDict::Deletebtn_Click);
			// 
			// Editbtn
			// 
			this->Editbtn->Location = System::Drawing::Point(504, 59);
			this->Editbtn->Name = L"Editbtn";
			this->Editbtn->Size = System::Drawing::Size(90, 28);
			this->Editbtn->TabIndex = 5;
			this->Editbtn->Text = L"Edit";
			this->Editbtn->UseVisualStyleBackColor = true;
			this->Editbtn->Click += gcnew System::EventHandler(this, &FocusDict::Editbtn_Click);
			// 
			// ContentRichTxt
			// 
			this->ContentRichTxt->Enabled = false;
			this->ContentRichTxt->Location = System::Drawing::Point(325, 100);
			this->ContentRichTxt->Name = L"ContentRichTxt";
			this->ContentRichTxt->Size = System::Drawing::Size(331, 212);
			this->ContentRichTxt->TabIndex = 6;
			this->ContentRichTxt->Text = L"";
			this->ContentRichTxt->TextChanged += gcnew System::EventHandler(this, &FocusDict::ContentRichTxt_TextChanged);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"dictionary.txt";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &FocusDict::OpenFileDialog1_FileOk);
			// 
			// FocusDict
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(669, 338);
			this->Controls->Add(this->ContentRichTxt);
			this->Controls->Add(this->Editbtn);
			this->Controls->Add(this->Deletebtn);
			this->Controls->Add(this->Addbtn);
			this->Controls->Add(this->Searchbtn);
			this->Controls->Add(this->Input);
			this->Controls->Add(this->Wordlist);
			this->Name = L"FocusDict";
			this->Text = L"FocusDict";
			this->Load += gcnew System::EventHandler(this, &FocusDict::FocusDict_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Wordlist_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Searchbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		ContentRichTxt->Text = "";
		std::string s = msclr::interop::marshal_as<std::string>(Wordlist->SelectedItem->ToString());
		Word* entry = hash->Search(s);
		ContentRichTxt->Text += "WORD: ";
		ContentRichTxt->Text += Wordlist->SelectedItem->ToString();
		string tmp = entry->type->type_name;
		String^ dumb = gcnew String(tmp.c_str());
		ContentRichTxt->Text += "\nTYPE: " + dumb;
		ContentRichTxt->Text += "\nMEANING: ";
		for (int i = 0; i < entry->type->meanings.size(); i++) {
			tmp = entry->type->meanings[i]->def;
			dumb = gcnew String(tmp.c_str());
			ContentRichTxt->Text += "\n- " + dumb;
			for (int j = 0; j < entry->type->meanings[i]->example.size(); j++) {
				tmp = entry->type->meanings[i]->example[j];
				dumb = gcnew String(tmp.c_str());
				ContentRichTxt->Text += "\nEx: " + dumb;
			}
		}
	}
private: System::Void Addbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	AddForm^ addform = gcnew AddForm();
	addform->ShowDialog();
	if (addform->isValid()) {
		String^ dumb = gcnew String(addform->w->word.c_str());
		Wordlist->Items->Add(dumb);
		hash->addTable(addform->w);
		hash->updateFile();
	}
}
private: System::Void Deletebtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Wordlist->SelectedIndex == -1) {
		MessageBox::Show("You need to selected one word");
	}
	else {
		std::string s = msclr::interop::marshal_as<std::string>(Wordlist->SelectedItem->ToString());
		if (hash->deleteWord(s)) {
			hash->updateFile();
			Wordlist->Items->Remove(Wordlist->SelectedItem);
		}
		else {
			MessageBox::Show("Something went wrong");
		}
	}
}
private: System::Void Editbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	EditForm^ editform = gcnew EditForm();
	editform->ShowDialog();
	if (hash->editWord(editform->w)) {
	}
}
private: System::Void ContentRichTxt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void OpenFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void FocusDict_Load(System::Object^ sender, System::EventArgs^ e) {
	std::ifstream myfile;
	std::string str;
	myfile.open("dictionary.txt");

	if (myfile.is_open())
	{
		while (std::getline(myfile, str))
		{
			if ((int)str[0] - '@' == 0)
			{
				str = str.substr(1, str.length());
				String^ dumb = gcnew String(str.c_str());
				Wordlist->Items->Add(dumb);
			}
		}
	}
}
private: System::Void Input_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->Text != "") {
		int index = Wordlist->FindString(Input->Text);
		if (index != -1) {
			Wordlist->SetSelected(index, true);
		}
		else {
			Wordlist->ClearSelected();
		}
	}
}
};
}

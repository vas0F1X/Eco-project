#pragma once
#include "Mainmenu.h"
#include <string>


namespace ecoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для enterAuth
	/// </summary>
	public ref class enterAuth : public System::Windows::Forms::Form
	{
	public:
		enterAuth(void)
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
		~enterAuth()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ login;
	protected:
	private: System::Windows::Forms::Label^ password;
	private: System::Windows::Forms::TextBox^ loginbox;
	private: System::Windows::Forms::TextBox^ passwordbox;
	private: System::Windows::Forms::Button^ enterbutton;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->login = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::Label());
			this->loginbox = (gcnew System::Windows::Forms::TextBox());
			this->passwordbox = (gcnew System::Windows::Forms::TextBox());
			this->enterbutton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// login
			// 
			this->login->AutoSize = true;
			this->login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->login->Location = System::Drawing::Point(326, 72);
			this->login->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(64, 24);
			this->login->TabIndex = 0;
			this->login->Text = L"Логин";
			this->login->Click += gcnew System::EventHandler(this, &enterAuth::login_Click);
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->password->Location = System::Drawing::Point(326, 166);
			this->password->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(76, 24);
			this->password->TabIndex = 0;
			this->password->Text = L"Пароль";
			// 
			// loginbox
			// 
			this->loginbox->Location = System::Drawing::Point(322, 106);
			this->loginbox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->loginbox->Name = L"loginbox";
			this->loginbox->Size = System::Drawing::Size(76, 20);
			this->loginbox->TabIndex = 1;
			// 
			// passwordbox
			// 
			this->passwordbox->Location = System::Drawing::Point(322, 199);
			this->passwordbox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->passwordbox->Name = L"passwordbox";
			this->passwordbox->Size = System::Drawing::Size(76, 20);
			this->passwordbox->TabIndex = 1;
			// 
			// enterbutton
			// 
			this->enterbutton->Location = System::Drawing::Point(329, 278);
			this->enterbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->enterbutton->Name = L"enterbutton";
			this->enterbutton->Size = System::Drawing::Size(56, 19);
			this->enterbutton->TabIndex = 2;
			this->enterbutton->Text = L"Войти";
			this->enterbutton->UseVisualStyleBackColor = true;
			this->enterbutton->Click += gcnew System::EventHandler(this, &enterAuth::enterbutton_Click);
			// 
			// enterAuth
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(706, 457);
			this->Controls->Add(this->enterbutton);
			this->Controls->Add(this->passwordbox);
			this->Controls->Add(this->loginbox);
			this->Controls->Add(this->password);
			this->Controls->Add(this->login);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"enterAuth";
			this->Text = L"enterAuth";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool Login_Password(String^ login, String^ password)
		{
			if (login == "master" && password == "master")
			{
				return true;
			}


			else
			{
				MessageBox::Show(this, "Вы ввели неверный пароль", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return false;
			}
		}

	private: System::Void enterbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ log = loginbox->Text;
		String^ pas = passwordbox->Text;

		if (Login_Password(log, pas))
		{
			Mainmenu^ menu = gcnew Mainmenu(); //создаем новый экземпляр
			menu->Show(); //открываем вторую форму
			enterAuth::Hide(); // скрываем первую форму;
		}
	}
	private: System::Void login_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
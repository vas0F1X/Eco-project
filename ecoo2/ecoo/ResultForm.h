#pragma once

#include <string>
#include <msclr\marshal_cppstd.h>

namespace ecoo {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for ResultForm
    /// </summary>
    public ref class ResultForm : public System::Windows::Forms::Form
    {
    public:
        ResultForm(String^ result)
        {
            InitializeComponent();
            resultLabel->Text = result;
        }

    protected:
        ~ResultForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Button^ closeButton;
    private: System::Windows::Forms::Label^ resultLabel;
    private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->components = (gcnew System::ComponentModel::Container());
               this->closeButton = (gcnew System::Windows::Forms::Button());
               this->resultLabel = (gcnew System::Windows::Forms::Label());
               this->SuspendLayout();
               // 
               // closeButton
               // 
               this->closeButton->Location = System::Drawing::Point(111, 108);
               this->closeButton->Name = L"closeButton";
               this->closeButton->Size = System::Drawing::Size(75, 23);
               this->closeButton->TabIndex = 0;
               this->closeButton->Text = L"Close";
               this->closeButton->UseVisualStyleBackColor = true;
               this->closeButton->Click += gcnew System::EventHandler(this, &ResultForm::closeButton_Click);
               // 
               // resultLabel
               // 
               this->resultLabel->AutoSize = true;
               this->resultLabel->Location = System::Drawing::Point(51, 48);
               this->resultLabel->Name = L"resultLabel";
               this->resultLabel->Size = System::Drawing::Size(35, 13);
               this->resultLabel->TabIndex = 1;
               this->resultLabel->Text = L"label1";
               // 
               // ResultForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(284, 261);
               this->Controls->Add(this->resultLabel);
               this->Controls->Add(this->closeButton);
               this->Name = L"ResultForm";
               this->Text = L"ResultForm";
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion
    private: System::Void closeButton_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
    }
    };
}

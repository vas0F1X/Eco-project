#pragma once
#include "datacalc.h"
#include "Calculationform.h"

namespace ecoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для Calculationform
	/// </summary>
	public ref class Calculationform : public System::Windows::Forms::Form
	{
	public:
		Calculationform(void)
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
		~Calculationform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ capacity;
	private: System::Windows::Forms::TextBox^ WTConsumption;
	private: System::Windows::Forms::TextBox^ idle;
	private: System::Windows::Forms::TextBox^ warmup;
	private: System::Windows::Forms::TextBox^ pop;

	private: System::Windows::Forms::ComboBox^ FuelType;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ NormType;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ CityType;
	private: System::Windows::Forms::Button^ backbut;
	private: System::Windows::Forms::Button^ raschet;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::TextBox^ dlinabox;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->capacity = (gcnew System::Windows::Forms::TextBox());
			this->WTConsumption = (gcnew System::Windows::Forms::TextBox());
			this->idle = (gcnew System::Windows::Forms::TextBox());
			this->warmup = (gcnew System::Windows::Forms::TextBox());
			this->pop = (gcnew System::Windows::Forms::TextBox());
			this->FuelType = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->NormType = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->CityType = (gcnew System::Windows::Forms::ComboBox());
			this->backbut = (gcnew System::Windows::Forms::Button());
			this->raschet = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->dlinabox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(45, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(309, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите грузоподъемность мусоровоза в (кг)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(287, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Введите средний расход топлива (л/100км)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(45, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(316, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Введите расход топлива на холостом ходу (л/ч)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(45, 199);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(290, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Введите время прогрева мусоровоза (мин)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(45, 244);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(257, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Укажите вид топлива для мусоровоза";
			// 
			// capacity
			// 
			this->capacity->Location = System::Drawing::Point(49, 38);
			this->capacity->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->capacity->Name = L"capacity";
			this->capacity->Size = System::Drawing::Size(117, 22);
			this->capacity->TabIndex = 5;
			// 
			// WTConsumption
			// 
			this->WTConsumption->Location = System::Drawing::Point(49, 82);
			this->WTConsumption->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->WTConsumption->Name = L"WTConsumption";
			this->WTConsumption->Size = System::Drawing::Size(117, 22);
			this->WTConsumption->TabIndex = 6;
			// 
			// idle
			// 
			this->idle->Location = System::Drawing::Point(49, 126);
			this->idle->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->idle->Name = L"idle";
			this->idle->Size = System::Drawing::Size(117, 22);
			this->idle->TabIndex = 7;
			// 
			// warmup
			// 
			this->warmup->Location = System::Drawing::Point(49, 219);
			this->warmup->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->warmup->Name = L"warmup";
			this->warmup->Size = System::Drawing::Size(117, 22);
			this->warmup->TabIndex = 8;
			// 
			// pop
			// 
			this->pop->Location = System::Drawing::Point(49, 309);
			this->pop->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pop->Name = L"pop";
			this->pop->Size = System::Drawing::Size(117, 22);
			this->pop->TabIndex = 9;
			// 
			// FuelType
			// 
			this->FuelType->FormattingEnabled = true;
			this->FuelType->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"А-76", L"АИ-92", L"АИ-93", L"АИ-95", L"АИ-98",
					L"зимний дизель", L"летний дизель", L"сжиженый нефтяной (пропан)", L"сжиженый природный газ (спг)"
			});
			this->FuelType->Location = System::Drawing::Point(49, 263);
			this->FuelType->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->FuelType->Name = L"FuelType";
			this->FuelType->Size = System::Drawing::Size(121, 24);
			this->FuelType->TabIndex = 10;
			this->FuelType->SelectedIndexChanged += gcnew System::EventHandler(this, &Calculationform::FuelType_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(45, 290);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(164, 16);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Введите число жителей";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(45, 334);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(174, 16);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Выберите вид норматива";
			// 
			// NormType
			// 
			this->NormType->FormattingEnabled = true;
			this->NormType->Items->AddRange(gcnew cli::array< System::Object^  >(2) {
				L"Отредактировать норматив накопления твердых коммунальных отходов",
					L"Подтвердить норму накопления твердых коммунальных отходов (0.16051)"
			});
			this->NormType->Location = System::Drawing::Point(49, 353);
			this->NormType->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->NormType->Name = L"NormType";
			this->NormType->Size = System::Drawing::Size(121, 24);
			this->NormType->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(45, 430);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(261, 16);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Выберите размер населенного пункта";
			// 
			// CityType
			// 
			this->CityType->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"Город", L"Пгт" });
			this->CityType->FormattingEnabled = true;
			this->CityType->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Город", L"Пгт" });
			this->CityType->Location = System::Drawing::Point(49, 449);
			this->CityType->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CityType->Name = L"CityType";
			this->CityType->Size = System::Drawing::Size(121, 24);
			this->CityType->TabIndex = 15;
			// 
			// backbut
			// 
			this->backbut->Location = System::Drawing::Point(403, 480);
			this->backbut->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->backbut->Name = L"backbut";
			this->backbut->Size = System::Drawing::Size(85, 28);
			this->backbut->TabIndex = 18;
			this->backbut->Text = L"Назад";
			this->backbut->UseVisualStyleBackColor = true;
			this->backbut->Click += gcnew System::EventHandler(this, &Calculationform::backbutton_Click);
			// 
			// raschet
			// 
			this->raschet->Location = System::Drawing::Point(548, 480);
			this->raschet->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->raschet->Name = L"raschet";
			this->raschet->Size = System::Drawing::Size(85, 28);
			this->raschet->TabIndex = 19;
			this->raschet->Text = L"Расчет";
			this->raschet->UseVisualStyleBackColor = true;
			this->raschet->Click += gcnew System::EventHandler(this, &Calculationform::raschet_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(45, 151);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(224, 16);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Расход топлива во время работы";
			this->label9->Click += gcnew System::EventHandler(this, &Calculationform::label9_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(49, 175);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(117, 22);
			this->textBox1->TabIndex = 21;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(659, 21);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(325, 16);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Введите протяженность маршрута в километрах";
			this->label10->Click += gcnew System::EventHandler(this, &Calculationform::label10_Click);
			// 
			// dlinabox
			// 
			this->dlinabox->Location = System::Drawing::Point(661, 38);
			this->dlinabox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dlinabox->Name = L"dlinabox";
			this->dlinabox->Size = System::Drawing::Size(100, 22);
			this->dlinabox->TabIndex = 24;
			// 
			// Calculationform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1115, 596);
			this->Controls->Add(this->dlinabox);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->raschet);
			this->Controls->Add(this->backbut);
			this->Controls->Add(this->CityType);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->NormType);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->FuelType);
			this->Controls->Add(this->pop);
			this->Controls->Add(this->warmup);
			this->Controls->Add(this->idle);
			this->Controls->Add(this->WTConsumption);
			this->Controls->Add(this->capacity);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Calculationform";
			this->Text = L"Calculationform";
			this->Load += gcnew System::EventHandler(this, &Calculationform::Calculationform_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void backbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		Calculationform::Hide();
	}
	private: System::Void raschet_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Чтение данных из текстовых полей формы
			double population = Convert::ToDouble(this->pop->Text);
			double accumulationNorm = 0.016; // Значение будет зависеть от выбора типа нормы
			if (this->NormType->Text == L"Норма") {
				accumulationNorm = 0.5; // Замените на реальное значение
			}
			else if (this->NormType->Text == L"Эталон") {
				accumulationNorm = 0.3; // Замените на реальное значение
			}

			double additionalPercentage = 1.2; // Замените на реальное значение
			double truckCapacity = Convert::ToDouble(this->capacity->Text);
			double RouteLength = Convert::ToDouble(this->dlinabox->Text);
			double WasteTruckConsumption = Convert::ToDouble(this->WTConsumption->Text);
			double FuelDensity = 0.75; // Значение будет зависеть от типа топлива
			double CO2Coefficient = 2.64; // Замените на реальное значение
			double idleFuel = Convert::ToDouble(this->idle->Text);
			double warmUpTime = Convert::ToDouble(this->warmup->Text);
			double workFuel = Convert::ToDouble(this->textBox1->Text);
			double workTime = 1; // Значение должно быть задано

			// Выполнение вычислений
			float waste = (population * accumulationNorm) + (population * accumulationNorm * additionalPercentage);
			float waste2 = waste * 1000;
			float trips = waste2 / truckCapacity;
			int trips111 = static_cast<int>(std::round(trips));
			float TotalWaste = trips * RouteLength;

			float Emissions = WasteTruckConsumption * FuelDensity * CO2Coefficient * TotalWaste / 100;

			float idleConsumption = idleFuel * (warmUpTime / 60) * FuelDensity;
			float workConsumption = workFuel * (workTime / 60) * FuelDensity;
			float warmUpConsumption = CO2Coefficient * idleConsumption;
			float workConsumptionTotal = CO2Coefficient * workConsumption;
			float summa = warmUpConsumption + workConsumptionTotal + Emissions;

			// Формирование строки с результатами
			String^ result = "Количество образованных отходов (тонн): " + waste.ToString() + "\n" +
				"Количество маршрутов: " + trips111.ToString() + "\n" +
				"CO2 пробег (кг): " + Emissions.ToString() + "\n" +
				"Суммарные выбросы: " + summa.ToString();

			// Вывод результата в новом окне
			MessageBox::Show(result, "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void FuelType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Calculationform_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

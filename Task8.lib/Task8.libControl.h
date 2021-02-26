#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Task8lib {

	/// <summary>
	/// Сводка для элемента управления Task8lib
	/// </summary>
	public ref class Task8libControl : public System::Windows::Forms::UserControl
	{
	public:
		Task8libControl(void)
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
		~Task8libControl()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		}
#pragma endregion
	};
}

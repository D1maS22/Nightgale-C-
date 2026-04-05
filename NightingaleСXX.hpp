#ifndef NIGHTINGALEСXX_HPP
#define NIGHTINGALEСXX_HPP

// Підключати цей заголовок після всіх інших, 
// щоб уникнути конфліктів з іншими бібліотеками 
// та забезпечити правильну роботу всіх макросів.

// ==============================
// БАЗОВИЙ СИНТАКСИС C++ ТА ЧИСЛА
// ==============================

// --- СИСТЕМНІ ТА ПРОСТОРНИЙ НАЗВ ---
#define простір_імен                    namespace
#define використовувати_простір_імен    using namespace
#define використовувати                  using
#define стандартний                     std
#define стандартна                      std
#define стандартне                      std
#define головна_функція                 main
#define псевдонім                       typedef
#define шаблон                          template
#define змінна_шаблону                  typename

// --- ЧИСЛА (ЧИСЛІВНИКИ) ---
#define нуль 0
#define один 1
#define одна 1
#define два 2
#define дві 2
#define три 3
#define чотири 4
#define пять 5
#define шість 6
#define сім 7
#define вісім 8
#define девять 9
#define десять 10
#define одинадцять 11
#define дванадцять 12
#define тринадцять 13
#define чотирнадцять 14
#define пятнадцять 15
#define шістнадцять 16
#define сімнадцять 17
#define вісімнадцять 18
#define девятнадцять 19
#define двадцять 20
#define тридцять 30
#define чотирдцять 40
#define пятдесят 50
#define шістдесят 60
#define сімдесят 70
#define вісімдесят 80
#define девяносто 90
#define сто 100
#define тисяча 1000
#define тисячі 1000
#define тисяч 1000
#define мільйон 1000000
#define мільйони 1000000
#define мільйонів 1000000
#define мільярд 1000000000
#define мільярда 1000000000
#define мільярдів 1000000000

// --- ТИПИ ДАНИХ ТА МОДИФІКАТОРИ ---
#define ціле int
#define довге long
#define дробове float
#define подвійне double
#define символ char
#define логічне bool
#define пустий void
#define пуста void
#define пусте void
#define авто auto
#define перелік enum
#define структура struct
#define клас class
#define постійне const
#define постійна const
#define постійний const
#define статичне static
#define статична static
#define статичний static
#define незмінне constexpr
#define незмінна constexpr
#define незмінний constexpr

// --- ЛОГІКА ТА ОПЕРАТОРИ ---
#define і &&
#define та &&
#define або ||
#define ні !
#define не !
#define істина true
#define правда true
#define справжнє true
#define правильне true
#define хиба false
#define хибне false
#define неправильне false

// --- КЕРУВАННЯ ПОТОКОМ (CONTROL FLOW) ---
#define якщо if
#define інакше else
#define або_якщо else if
#define поки while
#define цикл for
#define нехай for
#define робити do
#define вибір switch
#define випадок case
#define стандартно default
#define перервати break
#define продовжити continue
#define повернути return
#define спробувати try
#define спіймати catch
#define викинути throw

// --- ООП ТА ЗАГАЛЬНІ МЕТОДИ ---
#define публічне public
#define приватне private
#define захищене protected
#define це this
#define віртуальне virtual
#define перезаписати override
#define новий new
#define нова new
#define нове new
#define видалити delete
#define видалена delete
#define видалене delete
#define знищити delete
#define нульовий_вказівник nullptr

// Ці методи використовуються різними контейнерами, тому їх тримаємо глобальними
#define в_кінець push_back
#define розмір size
#define порожній empty
#define початок begin
#define кінець end
#define перший first
#define перша first
#define перше first
#define другий second
#define друге second
#define друга second


// ==================
// ЗАЛЕЖНІ БІБЛІОТЕКИ 
// ==================
// --- WINDOWS API (<windows.h>) ---
#if defined(_WINDOWS_) || defined(_WINDOWS_H) || defined(_INC_WINDOWS)
#define кирилиця SetConsoleCP(65001); SetConsoleOutputCP(65001)
#endif

// --- IOSTREAM (<iostream>) ---
#if defined(_GLIBCXX_IOSTREAM) || defined(_IOSTREAM_) || defined(_LIBCPP_IOSTREAM)
#define друкувати std::cout
#define зчитувати std::cin
#define помилка std::cerr
#define новий_рядок std::endl
#endif

// --- STRING (<string>) ---
#if defined(_GLIBCXX_STRING) || defined(_STRING_) || defined(_LIBCPP_STRING)
#define рядок std::string
#define ввід std::getline
#endif

// --- VECTOR (<vector>) ---
#if defined(_GLIBCXX_VECTOR) || defined(_VECTOR_) || defined(_LIBCPP_VECTOR)
#define вектор std::vector
#endif

// --- MAP (<map>) ---
#if defined(_GLIBCXX_MAP) || defined(_MAP_) || defined(_LIBCPP_MAP)
#define мапа std::map
#endif

// --- SET (<set>) ---
#if defined(_GLIBCXX_SET) || defined(_SET_) || defined(_LIBCPP_SET)
#define множина std::set
#endif

// --- UTILITY (<utility> - зазвичай підключається разом з map) ---
#if defined(_GLIBCXX_UTILITY) || defined(_UTILITY_) || defined(_LIBCPP_UTILITY)
#define пара std::pair
#endif

// --- THREAD (<thread>) ---
#if defined(_GLIBCXX_THREAD) || defined(_THREAD_) || defined(_LIBCPP_THREAD)
#define потік std::thread
#define приєднати join
#define приспати_на std::this_thread::sleep_for
#define приспати_до std::this_thread::sleep_until
#endif

// --- CHRONO (<chrono>) ---
#if defined(_GLIBCXX_CHRONO) || defined(_CHRONO_) || defined(_LIBCPP_CHRONO)
#define час std::chrono
#define стабільний_годинник std::chrono::steady_clock
#define час_зараз std::chrono::steady_clock::now()
#define тривалість std::chrono::duration
#define перетворити_час std::chrono::duration_cast
#define години std::chrono::hours
#define хвилини std::chrono::minutes
#define секунди std::chrono::seconds
#define мілісекунди std::chrono::milliseconds
#define мікросекунди std::chrono::microseconds
#define підрахунок count
#endif

// --- ATOMIC (<atomic>) ---
#if defined(_GLIBCXX_ATOMIC) || defined(_ATOMIC_) || defined(_LIBCPP_ATOMIC)
#define атомне std::atomic
#endif

// --- FSTREAM (<fstream>) ---
#if defined(_GLIBCXX_FSTREAM) || defined(_FSTREAM_) || defined(_LIBCPP_FSTREAM)
#define файл_читання std::ifstream
#define файл_запис std::ofstream
#define відкрити open
#define закрити close
#define кінець_файлу eof
#endif

// --- ALGORITHM (<algorithm>) ---
#if defined(_GLIBCXX_ALGORITHM) || defined(_ALGORITHM_) || defined(_LIBCPP_ALGORITHM)
#define сортувати std::sort
#define знайти std::find
#define мінімум std::min
#define максимум std::max
#define перевернути std::reverse
#endif

// --- CMATH (<cmath> або <math.h>) ---
#if defined(_GLIBCXX_CMATH) || defined(_CMATH_) || defined(_LIBCPP_CMATH) || defined(_MATH_H_)
#define корінь std::sqrt
#define степінь std::pow
#define модуль std::abs
#define округлити std::round
#define округлити_вниз std::floor
#define округлити_вгору std::ceil
#endif

// --- MEMORY (<memory>) ---
#if defined(_GLIBCXX_MEMORY) || defined(_MEMORY_) || defined(_LIBCPP_MEMORY)
#define унікальний_вказівник std::unique_ptr
#define спільний_вказівник std::shared_ptr
#define створити_унікальний std::make_unique
#define створити_спільний std::make_shared
#endif

// --- CTIME ТА CSTDLIB (<ctime>, <cstdlib>) ---
#if defined(_GLIBCXX_CSTDLIB) || defined(_CSTDLIB_) || defined(_LIBCPP_CSTDLIB) || defined(_GLIBCXX_CTIME) || defined(_CTIME_) || defined(_LIBCPP_CTIME) || defined(_STDLIB_H_) || defined(_TIME_H_)
#define рандомізувати srand(static_cast<unsigned>(time(nullptr)))
#define випадкове rand
#endif

#endif // !NIGHTINGALEСXX_HPP

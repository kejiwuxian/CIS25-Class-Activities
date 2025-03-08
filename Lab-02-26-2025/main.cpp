#include <iostream>
#include <string>

using namespace std::string_literals; // enables s-suffix for std::string literals
using namespace std;

/*
GITHUB SSH:
	ssh-keygen -t ed25519 -C "email"
	Generating public/private rsa key pair.
	Enter file in which to save the key (C:\Users\YOU/.ssh/id_rsa):
	Enter passphrase (empty for no passphrase):
	Enter same passphrase again:

	ssh-add c:/Users/YOU/.ssh/id_rsa

	Add the SSH public key to your account on GitHub.
*/

/*
Compilers:
	Special programs that re-written (translated) high level languages written by humans into machine language.

Console programs:
	Console programs are programs that use text to communicate with the user and the environment, such as printing text to the screen or reading input from a keyboard.

Source code:
	The fundamental component of a computer program that is created by a programmer.
	Often written in the form of functions, descriptions, definitions, calls, methods and other operational statements.
	It is designed to be human-readable and formatted in a way that developers and other users can understand.

Segmentation Fault:
	A program has access to specific regions of memory while it is running:
		1. Access the memory that it does not own.
		2. Dereference nullptr or NULL pointer.
		3. Modify Read-Only memory.
	Common Segmentation Fault Scenarios:
		1. Modifying a String Literal
		2. Accessing an Address that is Freed
		3. Accessing Out of Array Index Bounds
		4. Improper Use of scanf()
		5. Stack Overflow
		6. Dereferencing Uninitialized/NULL Pointer
	How to Fix Segmentation Faults:
		Avoid modifying string literals or use the built in string container.
		Being careful when using pointers as they are one of the most common causes. You can also use the smart pointers instead of raw pointers.
		Considering the buffer and stack size before storing the data to avoid buffer or stack overflow.
		Checking for bounds before accessing array elements or use STL containers such as vectors, sets, maps, etc.
		Use scanf() and printf() carefully to avoid incorrect format specifiers or buffer overflow.

Structure of a program:
	// my first program in C++
		Two slash signs indicate that the rest of the line is a comment inserted by the programmer but which has no effect on the behavior of the program.
		Programmers use them to include short explanations or observations concerning the code or program.
		In this case, it is a brief introductory description of the program.
	#include <iostream>
		Lines beginning with a hash sign (#) are directives read and interpreted by what is known as the preprocessor.
		They are special lines interpreted before the compilation of the program itself begins.
		In this case, the directive #include <iostream>, instructs the preprocessor to include a section of standard C++ code, known as header iostream.
	A blank line.
		Blank lines have no effect on a program. They simply improve readability of the code.
	int main ()
		This line initiates the declaration of a function.
		Essentially, a function is a group of code statements which are given a name: in this case, this gives the name "main" to the group of code statements that follow.
		Function definition is introduced with a succession of a type (int), a name (main) and a pair of parentheses (()), optionally including parameters.
		The function named main is a special function in all C++ programs; it is the function called when the program is run.
		The execution of all C++ programs begins with the main function, regardless of where the function is actually located within the code.
	{ and }
		The open brace ({) at line 5 indicates the beginning of main's function definition, and the closing brace (}) at line 7, indicates its end.
		Everything between these braces is the function's body that defines what happens when main is called.
		All functions use braces to indicate the beginning and end of their definitions.
	std::cout << "Hello World!";
		This line is a C++ statement.
		A statement is an expression that can actually produce some effect.
		It is the meat of a program, specifying its actual behavior.
		Statements are executed in the same order that they appear within a function's body.
		This statement has three parts:
			First, std::cout, which identifies the standard character output device (usually, this is the computer screen).
			Second, the insertion operator (<<), which indicates that what follows is inserted into std::cout.
			Finally, a sentence within quotes ("Hello world!"), is the content inserted into the standard output.
		Notice that the statement ends with a semicolon (;).
		This character marks the end of the statement, just as the period ends a sentence in English.
		All C++ statements must end with a semicolon character.
		One of the most common syntax errors in C++ is forgetting to end a statement with a semicolon.
	using namespace std;
		cout is part of the standard library, and all the elements in the standard C++ library are declared within what is called a namespace: the namespace std.
		In order to refer to the elements in the std namespace a program shall either qualify each and every use of elements of the library, or introduce visibility of its components.
		The most typical way to introduce visibility of these components is by means of using declarations.

Variables and types:
	A portion of memory to store a value.
	Each variable needs a name that identifies it and distinguishes it from the others.
	A valid identifier is a sequence of one or more letters, digits, or underscore characters (_).
	Spaces, punctuation marks, and symbols cannot be part of an identifier.
	In addition, identifiers shall always begin with a letter.
	They can also begin with an underline character (_), but such identifiers are -on most cases- considered reserved for compiler-specific keywords or external identifiers, as well as identifiers containing two successive underscore characters anywhere.
	In no case can they begin with a digit.
	Fundamental data types:
		Character types:
			They can represent a single character, such as 'A' or '$'.
			The most basic type is char, which is a one-byte character.
			Other types are also provided for wider characters.
		Numerical integer types:
			They can store a whole number value, such as 7 or 1024.
			They exist in a variety of sizes, and can either be signed or unsigned, depending on whether they support negative values or not.
		Floating-point types:
			They can represent real values, such as 3.14 or 0.01, with different levels of precision, depending on which of the three floating-point types is used.
		Boolean type:
			The boolean type, known in C++ as bool, can only represent one of two states, true or false.
		List of fundamental types in C++:
			Group				Type names				Notes on size / precision
			Character			char					Exactly one byte in size. At least 8 bits.
								char16_t				Not smaller than char. At least 16 bits.
								char32_t				Not smaller than char16_t. At least 32 bits.
								wchar_t					Can represent the largest supported character set.
			Integer (signed)	signed char				Same size as char. At least 8 bits.
								signed short int		Not smaller than char. At least 16 bits.
								signed int				Not smaller than short. At least 16 bits.
								signed long int			Not smaller than int. At least 32 bits.
								signed long long int	Not smaller than long. At least 64 bits.
			Integer (unsigned)	unsigned char			(same size as their signed counterparts)
								unsigned short int
								unsigned int
								unsigned long int
								unsigned long long int
			Floating-point		float
								double					Precision not less than float
								long double				Precision not less than double
			Boolean				bool
			Void				void					no storage
			Null pointer		decltype(nullptr)
		The names of certain integer types can be abbreviated without their signed and int components
	Declaration of variables
		C++ is a strongly-typed language, and requires every variable to be declared with its type before its first use.
		This informs the compiler the size to reserve in memory for the variable and how to interpret its value.
		The syntax to declare a new variable in C++ is straightforward: we simply write the type followed by the variable name.
	Initialization of variables
		When the variables in the example above are declared, they have an undetermined value until they are assigned a value for the first time.
		But it is possible for a variable to have a specific value from the moment it is declared.
		This is called the initialization of the variable.
		In C++, there are three ways to initialize variables:
			type identifier = initial_value;
			type identifier (initial_value);	// constructor initialization
			type identifier {initial_value};	// uniform initialization
	Type deduction: auto and decltype
		When a new variable is initialized, the compiler can figure out what the type of the variable is automatically by the initializer.
		For this, it suffices to use auto as the type specifier for the variable:
			int foo = 0;
			auto bar = foo;	// the same as: int bar = foo;
		Variables that are not initialized can also make use of type deduction with the decltype specifier:
			int foo = 0;
			decltype(foo) bar;	// the same as: int bar; 

Naming convention
	A naming convention is a set of rules for choosing the character sequence to be used for identifiers that denote variables, types, functions, and other entities in source code and documentation.
	Reasons for using a naming convention (as opposed to allowing programmers to choose any character sequence) include the following:
		To reduce the effort needed to read and understand source code.
		To enable code reviews to focus on more important issues than arguing over syntax and naming standards.
		To enable code quality review tools to focus their reporting mainly on significant issues other than syntax and style preferences.
	Some of the potential benefits that can be obtained by adopting a naming convention include the following:
		to provide additional information (i.e., metadata) about the use to which an identifier is put;
		to help formalize expectations and promote consistency within a development team;
		to enable the use of automated refactoring or search and replace tools with minimal potential for error;
		to enhance clarity in cases of potential ambiguity;
		to enhance the aesthetic and professional appearance of work product (for example, by disallowing overly long names, comical or “cute” names, or abbreviations);
		to help avoid “naming collisions” that might occur when the work product of different organizations is combined (see also: namespaces);
		to provide meaningful data to be used in project handovers which require submission of program source code and all relevant documentation;
		to provide a better understanding in case of code reuse after a long interval of time.
	Readability
	English language
	Naming convention
	S-I-D // short, intuitive, and descriptive
	Avoid contractions
	Avoid context duplication
	Reflect the expected result
	A/HC/LC Pattern // prefix? + action (A) + high context (HC) + low context? (LC)

Mathematical Conventions
	Order of operations PEMDAS
		Parentheses -- when there are multiple operations and parentheses within the parentheses, treat the section inside as a separate expression and do the order of operations within said parentheses
		Exponents
		Multiplication and Division -- done from left to right
		Addition and Subtraction -- done from left to right

Statically Typed vs Dynamically Typed Languages
	A data type in a programming language refers to a characteristic that defines the nature of the value that a data element has.
	Every programming language has a system of checking that values have been assigned their correct types, which is known as type checking.
	There are two categories of type checking implemented in most programming languages, static and dynamic:
		Statically Typed Languages:
			In statically typed programming languages, type checking occurs at compile time.
			Typically perform better at execution time because type checking has already been completed.
		Dynamically Typed Languages:
			In dynamically typed languages, type checking takes place at runtime or execution time.
			Tendency for slower execution because the type information for every variable has to be retrieved at runtime.
	The major differences are:
		Statically Typed Languages								Dynamically Typed Languages
		Type checking is completed at compile time				Type checking is completed during runtime
		Explicit type declarations are usually required			Explicit declarations are not required
		Errors are detected earlier								Type errors are detected later during execution
		Variable assignments are static and cannot be changed	Variable assignments are dynamic and can be altered~
		Produces more optimized code							Produces less optimized code, runtime errors are possible

Data Races in C++
	In C++, data race is a commonly occurring problem in concurrent programming.
	It occurs when two or more threads concurrently access the same memory location, and at least one of the accesses is a write.
	Data races lead to undefined behaviour, which means the program can exhibit unpredictable behavior, crash, or produce incorrect results.
	Preventing data races is crucial for writing safe and reliable concurrent programs.
	Common Causes of Data Race:
		Inconsistent Data: Different threads might read different values from the same variable.
		Corrupted Data: One thread might overwrite the data being used by another thread.
	How to Avoid Data Race in C++
		We can prevent the data races from happening by synchronizing the thread using various synchronizing primitives available in C++.
		Some of the are as follows:
			Mutex
			Atomic Operations
			Condition Variable
		Mutexes
			A std::mutex can be used to ensure mutual exclusion, meaning that only one thread can access the critical section (shared data) of code at a time.
			Locking a mutex before accessing shared data ensures that only one thread can access the data at a time.
			We can unlock it when we are done working on it.
			The mutex locked using lock_guard does not need to be explicitly unlocked at the end. They automatically gets unlocked when lock goes out of scope.
		Atomic Operations
			In C++, std::atomic provides atomic operations on fundamental data types, which means these operations are performed as a single, indivisible step.
			Atomic operations prevent data races without the need for explicit locks.
		Condition Variable
			Condition variables are used to block a thread until a particular condition is met.
			They are used in conjunction with a mutex to wait for or signal changes in shared data.

Narrowing Conversions
	Narrowing conversions are potentially unsafe numeric conversions where the destination type may not accommodate all values of the source type.
	It’s essential to avoid narrowing conversions whenever possible.
	Rank of integral types: bool < char < short < int < long < long long
	Rank of floating point types: float < double < long double

Integer overflow
	Overflow is a phenomenon where operations on 2 numbers exceeds the maximum (or goes below the minimum) value the data type can have.
	Detecting Addition overflow:
		Consider 2 variables a and b of a data type with size n and range R.
		Let + be actual mathematical addition and a$b be the addition that the computer does.
		If a+b<=R-1, a$b=a+b
		As a and b are unsigned, a$b is more or equal to than both a and b.
		If a+b>=R a$b=a+b-R
		as R is more than both a and b, a-R and b-R are negative
		So, a+b-R<a and a+b-R<b
		Therefore, a$b is less than both a and b
	Detecting Multiplication overflow:
		1. if a*b>max, then a>max/b (max is R-1 if unsigned and R/2-1 if signed).
		2. Let there be a data type of size n and range R called var_t and a data type of size 2n called var2_t.
			Let there be 2 variables of var_t called a and b.
			Range of var2_t will be R*R, which will always be more than the product of a and b.
			hence if var2_t(a)*var2_t(b)>R overflow has happened.
	Truncation:
		This happens when a shorter is assigned from a longer variable.
		Only the lower bits are copied and the value's meaning is translated.
	Type conversion:
		Whenever an operation is performed between an unsigned and a signed variable of the same type, operands are converted to unsigned.
		Whenever an operation is performed between a long type and a short type, operands are converted to the long type.
	Type promotion:
		Whenever an operation is performed on two variables of a type shorter than int, the type of both variables is converted to int.

Nested Loops and Computational Complexity
	Nested loops directly impact the computational complexity of a program because they increase the number of operations performed as the nesting depth increases.
	If the Outer loop executes n times and the inner loop executes m times for each iteration of the outer loop, then the total iterations equals n*m, So time complexity equals O(m?n), and if both loops have a similar range n?m, then the complexity is approximately O(n^k), where k is the depth of nesting.
	Each additional nested loop increases the total number of iterations exponentially, therefore Large input sizes n affect performance for higher time complexity (O(n^k)).
	Nested loop may lead to poor performance in large datasets, for example processing a matrix of size 1000 * 1000 with O(n^2) results in 1,000,000 operations, which makes it less scalable.
	Optimizing Nested Loops
		Avoid unnecessary nesting
			The more loops you have, the slower the program becomes.
			So try to avoid any unnecessary nesting, sometimes rearranging the loops or changing its order can reduce the need for nested loops.
		Use efficient data structures
			Depending on the problem, you can use heaps, queues, and stacks to optimize access patterns.
			Use hash sets or hash maps, which allows for constant time complexity for insertions and deletions.
			This is often used for a large array or list to avoid complex iteration over it.
		Break Early (Exit Conditions)
			You can break out the loop early if needed or can continue to reduce unnecessary work.
		Use Divide and Conquer or Dynamic Programming
			Divide and conquer algorithms help in reducing nesting by breaking the problem into smaller subproblems, which are further solved independently and combined later.
			By dynamic programming, you can transform an exponential time complexity problem into a polynomial one.
		Parallelization
			You can use multithreading or multiprocessing if your nested loops are independent and can be computed parallel, this can speed up your program.
		Applying Mathematical Optimizations and Built-in Functions or Libraries
			Mathematical optimizations can help in reducing the need for nested loops for some problems.

Functions with Variable Argument Lists
	Function declarations in which the last member of is the ellipsis (...) can take a variable number of arguments.
	In these cases, C++ provides type checking only for the explicitly declared arguments.
	You can use variable argument lists when you need to make a function so general that even the number and types of arguments can vary.
	To access arguments after those declared, use the macros contained in the standard include file <stdarg.h>.

Explicitly Defaulted and Deleted Functions
	In C++11, defaulted and deleted functions give you explicit control over whether the special member functions are automatically generated.
	Deleted functions also give you simple language to prevent problematic type promotions from occurring in arguments to functions of all types:
		special member functions
		normal member functions
		nonmember functions
	which would otherwise cause an unwanted function call.
	In C++, the compiler automatically generates the default constructor, copy constructor, copy-assignment operator, and destructor for a type if it doesn't declare its own.
	These functions are known as the special member functions, and they're what make simple user-defined types in C++ behave like structures do in C.
	That is, you can create, copy, and destroy them without extra coding effort.
	C++11 brings move semantics to the language and adds the move constructor and move-assignment operator to the list of special member functions that the compiler can automatically generate.
	This is convenient for simple types, but complex types often define one or more of the special member functions themselves, and this can prevent other special member functions from being automatically generated.
	In practice:
		If any constructor is explicitly declared, then no default constructor is automatically generated.
		If a virtual destructor is explicitly declared, then no default destructor is automatically generated.
		If a move constructor or move-assignment operator is explicitly declared, then:
			No copy constructor is automatically generated.
			No copy-assignment operator is automatically generated.
		If a copy constructor, copy-assignment operator, move constructor, move-assignment operator, or destructor is explicitly declared, then:
			No move constructor is automatically generated.
			No move-assignment operator is automatically generated.
	You can default any of the special member functions:
		to explicitly state that the special member function uses the default implementation
		to define the special member function with a nonpublic access qualifier
		to reinstate a special member function whose automatic generation was prevented by other circumstances.
	You can delete special member functions and normal member functions and nonmember functions to prevent them from being defined or called.
	Deleting of special member functions provides a cleaner way of preventing the compiler from generating special member functions that you don't want.
	The function must be deleted as it's declared; it can't be deleted afterwards in the way that a function can be declared and then later defaulted.

Inline functions
	The inline keyword suggests that the compiler substitute the code within the function definition in place of each call to that function.
	The inline and __inline specifiers suggest to the compiler that it insert a copy of the function body into each place the function is called.
	The __forceinline keyword overrides the cost-benefit analysis and relies on the judgment of the programmer instead.
	Inline functions are best used for small functions, such as those that provide access to data members. Short functions are sensitive to the overhead of function calls.
	Longer functions spend proportionately less time in the calling and returning sequence and benefit less from inlining.
	A macro has some things in common with an inline function. But there are important differences.
	Here are some of the differences between the macro and the inline function:
		Macros are always expanded inline. However, an inline function is only inlined when the compiler determines it is the optimal thing to do.
		The macro may result in unexpected behavior, which can lead to subtle bugs.
		An inline function is subject to semantic processing by the compiler, whereas the preprocessor expands macros without that same benefit. Macros aren't type-safe, whereas functions are.
		Expressions passed as arguments to inline functions are evaluated once. In some cases, expressions passed as arguments to macros can be evaluated more than once.

size_t data type
	size_t is an unsigned integer data type that is defined in various header files such as: <stddef.h>, <stdio.h>, <stdlib.h>, <string.h>, <time.h>, <wchar.h>
	It’s a type which is used to represent the size of objects in bytes and is therefore used as the return type by the sizeof operator.
	It is guaranteed to be big enough to contain the size of the biggest object the host system can handle. Basically the maximum permissible size is dependent on the compiler.
	If the compiler is 32 bit then it is simply a typedef(i.e., alias) for unsigned int but if the compiler is 64 bit then it would be a typedef for unsigned long long.
	The size_t data type is never negative.
	Advantages of using size_t:
		Portability:
			The size_t data type is defined in the stddef.h header, which is part of the C standard library.
			By using size_t, you can ensure that your code is portable across different platforms and compilers.
		Unsigned:
			size_t is an unsigned integer type, which means it can represent sizes up to the maximum size of unsigned integers.
			This is useful when dealing with arrays and memory blocks, as sizes can never be negative.
		Performance:
			size_t is usually implemented as a fast and efficient integer type, and using it can result in better performance than using other integer types.
		Clear intent:
			Using size_t makes it clear to the reader of your code that you are dealing with sizes and not other types of integers.
			This makes the code easier to understand and less prone to errors.
		Standardization:
			By using size_t, you are following a widely used and accepted standard, which makes your code more readable and maintainable for other programmers.
		Interoperability:
			size_t is widely used in many libraries and APIs, and using it in your code allows for easier integration with other code.

Multithreading
	Multithreading is a feature that allows concurrent execution of two or more parts of a program for maximum utilization of the CPU.
	Each part of such a program is called a thread. So, threads are lightweight processes within a process.
	Multithreading support was introduced in C++11.
	Prior to C++11, we had to use POSIX threads or <pthreads> library.
	While this library did the job the lack of any standard language-provided feature set caused serious portability issues.
	C++ 11 did away with all that and gave us std::thread. The thread classes and related functions are defined in the <thread> header file.

Condition Variables in C++ Multithreading
	In C++, the condition variable is a synchronization primitive that is used to notify the other threads in a multithreading environment that the shared resource is free to access.
	It is defined as the std::condition_variable class inside the <condition_variable> header file.
	Condition variable is especially needed in cases where one thread has to wait for another thread execution to continue the work.
	For example, the producer-consumer relationship, sender-receiver relationship, etc.
	In these cases, the condition variable makes the thread wait till it is notified by the other thread.
	It is used with mutex locks to block access to the shared resource when one thread is working on it.
	Errors Associated with C++ Condition Variable
		Spurious Wakeup: Spurious wakeup refers to the condition when the consumer/receiver thread finishes its work before it is notified by the producer/sender.
		Lost Wakeup: Lost wakeup refers to the condition when the sender sends the notification but there is no receiver in the wait for the notification yet.
	Advantages of Condition Variable
		The condition variable provide a way to signal the thread of a particular condition.
		The sleeping thread in condition variable is different from the waiting threads consuming less resources.
*/

int main()
{
	// Character literals
	auto c0 = 'A'; // char
	auto c1 = u8'A'; // char
	auto c2 = L'A'; // wchar_t
	auto c3 = u'A'; // char16_t
	auto c4 = U'A'; // char32_t

	// Multicharacter literals
	auto m0 = 'abcd'; // int, value 0x61626364

	// String literals
	auto s0 = "hello"; // const char*
	auto s1 = u8"hello"; // const char* before C++20, encoded as UTF-8,
	// const char8_t* in C++20
	auto s2 = L"hello"; // const wchar_t*
	auto s3 = u"hello"; // const char16_t*, encoded as UTF-16
	auto s4 = U"hello"; // const char32_t*, encoded as UTF-32

	// Raw string literals containing unescaped \ and "
	auto R0 = R"("Hello \ world")"; // const char*
	auto R1 = u8R"("Hello \ world")"; // const char* before C++20, encoded as UTF-8,
	// const char8_t* in C++20
	auto R2 = LR"("Hello \ world")"; // const wchar_t*
	auto R3 = uR"("Hello \ world")"; // const char16_t*, encoded as UTF-16
	auto R4 = UR"("Hello \ world")"; // const char32_t*, encoded as UTF-32

	// Combining string literals with standard s-suffix
	auto S0 = "hello"s; // std::string
	auto S1 = u8"hello"s; // std::string before C++20, std::u8string in C++20
	auto S2 = L"hello"s; // std::wstring
	auto S3 = u"hello"s; // std::u16string
	auto S4 = U"hello"s; // std::u32string

	// Combining raw string literals with standard s-suffix
	auto S5 = R"("Hello \ world")"s; // std::string from a raw const char*
	auto S6 = u8R"("Hello \ world")"s; // std::string from a raw const char* before C++20, encoded as UTF-8,
	// std::u8string in C++20
	auto S7 = LR"("Hello \ world")"s; // std::wstring from a raw const wchar_t*
	auto S8 = uR"("Hello \ world")"s; // std::u16string from a raw const char16_t*, encoded as UTF-16
	auto S9 = UR"("Hello \ world")"s; // std::u32string from a raw const char32_t*, encoded as UTF-32

	return 0;
}
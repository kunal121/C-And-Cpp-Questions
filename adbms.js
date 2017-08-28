
        __________ADBMS_________

    ->  Varchar can store upto 2000 bytes of character. Varchar can store upto 4000 bytes of char.
    ->  if we declare datatype as varchar then it will occupt space for null values.
    ->  In case of varchar 2 datatype will not occupy any space. Varchar is going to be replaced by varchar to in next version so oracle suggest the use varchar to instead of varchar while declaring datatype

    SQL : select and manipulating data
        execute one statement at a time
        sql is used to write dml,dcl,tcl

    PLSQL : create applications
        block of code executes
        used to write program blocks,trigger,fxn , packages

    can we insert into joined tables?

    show all tables : select * from tab
    
    Practical 1 :  
    -------------
        
        View, Index, Sequence, Cluster
    
    -> After a table is created and populated with data, it may become necessary to prevent all users from accessing all the columns of the table for data security reason.
    
    -> To reduce redundant data as minimum as possible. Oracle allows the creation of view.
    
    -> Common restrictions on updatable views : 
            -> Aggregate functons
            -> Distinct, group by, having clause
            -> Subqueries
            -> Constants, Strings, value expressions
            -> Union, intersection, minus clause
    
    1. View :
        
        CREATE View : CREATE VIEW Viewname AS SELECT Col1, Col2, Col3 FROM Tablename WHERE condition
        UPDATE View : 
        DELETE View : DROP View Viewname
        
    2. Updatable View : 
        
        //Note : Values inserted in view dorectly go into the table
            
        Simple : Created from Single table
            
            Insert : insert into viewname values(11.'www',000)   
            Update : update viewname set col = new_value where row_condition
            ** If base table contains either Primary key or Not null key then we have to enter the values of the columns to update the view.
            
            ** View that includes all the columns of the base table with primary key and not null is updatable view.
        
        Conplex : Created from Multiple Tables  
            
            If a view is created with multiple tables it cannot be updated or changed.
            You can do insersion or updation on the table whose primary key is acting as a key in the view. 
            If you delete from view data from that table will be deleted whose primary key acts as a key for the view,the other table data will remain the same even if it is deleted from the view;


    INDEX : 
    --------
        
        -> It i s an ordered list of a contents of a column (or a group of column)
        -> SYNTAX : 
            create index <indexname> on tablename <column name>
            ex : create index name_index on students (Sname);

            **Note : Any column cannot be indexed more than once. i.e. You cannot make an index for a column more than once.

        -> VIEW ALL INDEXES : 

                select * from all_indexes where table_name = 'STUDENTS'
                
                *NOTE : table name should be in capital letters as by default it is saved in caps in database

        -> CREATE INDEX FOR COLUMN WITH UNIQUE ENTRIES : 

            create unique index <indexname> on tablename <column name>
                
        -> CREATE BITMAP : 

            create bitmap index <indexname> on tablename <column name>
                
        -> SELECT ROWID FROM TABLE
            -> extended : 
                select rowid,Sname from table_name
                FORMAT : OOOOOOFFFBBBBBBRRR
                O -> objects (6)
                F -> files (3)
                B -> blocks (6)
                R -> records (3)
            -> restricted : 
                FORMAT : BBBBBB.RRRR.FFFF
            
        -> SELECT 2ND ROW FROM TABLE 
		
			select * from students where rownum <= 2 minus select * from students where rownum <= 1 
			
	SEQUENCE : 
	----------
			SYNTAX : 
				create sequence <sequence_name> 
					increment by <int value>
					start with <int value>
					maxvalue <int value> / NO MAXVALUE
					minvalaue <int value> / NO MINVALUE
					CYCLE / NO CYCLE
					CACHE <int value> / NO CACHE
					order / no order
				
			FOR EXAMPLE : 
				create sequence sq1 
					increment by 3
					start wit 10
					maxvalue 1000
					minvalue 1
					
		KEYWORDS : 
			-> INCREMENT BY : Specifies interval between sequence nos. it can be any positive or negative values but not 0.
				if this cause is omitted by default value is 1.
			-> MINVALUE  : Specifies the sequence minimum value.
			-> NO MINVALUE : Specifies min value of 1 as an ascending sequence and -10^26 for decending sequence.
			-> MAXVALUE : Specifies max value a sequence can generate.
			-> NO MAXVALUE : Specify the max of 10^27 for ascending sequence and -1 for descending sequence.
				This is a default clause.
			-> START WITH : Specifies the first sequence no to be generated.The default for an ascending sequence is sequence minium 	value 1 for descending sequence max value is -1
			-> CYCLE  : Specifies that the sequence continue to generate the repeat values either reaching its max value.
			-> NO CYCLE : Specifies that sequence cannot generate more values that max value By default it is selected.
			-> CACHE : Specifies how many values of the sequence oracle keeps in memory for faster access.The min value is 2
			-> NO CACHE : Specifies how many values of sequence are not pre allocated. 
			-> ORDER : Sequence nos are generated in an order.
			-> NO ORDER : Sequence no is generated in any order.
			
	PRACTICAL 2 : 
	-------------
		
		PL/SQL
		------
		
		Varable		| Declaration
		Constant	|
	
		Block Structure 
		
		1. To print statement : 
				dbms_output.put_line("Hi cse")
				
				dbms_output -> built in package
				put_line()  -> procedure inside package
				
		2. Comment : 
			Single line : --
			Multi line : /*  */

		3. Conctenation : ||

		EXAMPLE : 
		
			DECLARE
				msg varchar(20) : 'Chitkara';
			BEGIN
				dbms_output.put_line(msg);
				dbms_output.put_line('University')
				-- For concatenation use ||
				dbms_output.put_line(msg || 'University')
			END;

		4. Take input from user : 
			syntax : variable_name datatype(size) :=  :Variable name;

	ASSIGNING SQL QUERY RESULT TO PL/SQL VARIABLE : 
		1. % type : 
			It is  used to declare a varuable with same datatype as that of the specified tables column
			
			DECLARE
			studob student.dob % type;
			
			// studob -> new variable
			// student -> table name
			// dob -> existing variable name
			BEGIN
			SELECT dob into studob FROM student WHERE sid = 3;
			dbms_output.put_line('Date of birth' || studob);
			END;

		2. % row type : 
			DECLARE
			x student % rowtype;
			BEGIN
			select * into c from student where sid = 4;
			dbms_output.put_line(x.sid || x.sname || x.dob);
			END;

	* It provides a record type that represent a row in a table
	* The record can store entire data of row selected from the table having same names and datatypes.
	
PRACTICAL 3 : 

	Control Structure  --->  Conditional -> if then
										 -> if then else
										 -> if then else if
										 -> nested if then else
										 -> case
					   --->	 Iteration   -> basic loop
					   					 -> while loop
										 -> for loop
										 -> reverse for loop
					   --->  Sequential  -> continue
					   					 -> goto
					   
		CONDITIONAL : 
			1. if : 
				syntax : if(condition) then
							statement
						 end if;
				DECLARE
				a int := :a;
				b int := :b;
				BEGIN
				if(a > b)
				then
				dbms_output.put_line('a is bigger')
				end if;
				END;

			2. if then else : 
					syntax : if(condition) then
								statement;
							 else
								 statement;
							 end if;
								 	
			2. if then else if: 
					syntax : if(condition) then
								statement;
							 else if
								 statement;
							 else
								 statement;
							 end if;
							 end if;
								 
			CASE STATEMENT : 

				case variable_name,
				when 

			BASIC LOOP : 
				
				DECLARE 
				n int:=1;
				BEGIN
				loop
				dbms_output.put_line(n);
				n:=n+1;
				exit when n=5;
				end loop;
				END;

			FOR LOOP :

				declare
				n int:=1;
				BEGIN
				while n!= 8
				loop
				dbms_output.put_line(n);
				n:=n+1;
				end loop;
				END;

			FOR LOOP : 
				DECLARE
				i int;
				begin
				for i in 1..8
				loop
				dbms_output.put_line(i);
				end loop;
				end;

print odd nos:
			DECLARE
			i int;
			begin
			for i in 1..100
			loop
			if (i mod 2  != 0) then
			dbms_output.put_line(i);
			end if;
			end loop;
			end;

GOTO : 

			declare
			n int:=1;
			begin
			<<loop_begin>>
			while n<20
			loop
			dbms_output.put_line('value is ' || n);
			n:=n+1;
			if (n=15)then
			n:=n+1;
			goto loop_begin;
			end if;
			end loop;
			end;

CONTINUE : 

			declare
			n int:=1;
			begin
			loop
			dbms_output.put_line('value is ' || n);
			n:=n+1;
			if (n<5)then
			continue;
			end if;
			dbms_output.put_line(n);
			exit;
			end loop;
			end;

	EXCEPTION HANDLING : 
	------------------

		-> An error condition during a program excution is called exception.
		-> PL/SQL provides a feature to handle exception which occurs in PL/SQL block known as EXCEPTION 
		-> Using exception handling you can test code and avoid it from exitiing abruptly
		-> WHen an error occurs an exception is raised i.e. normal execution stops and control transfers to exception handling part of PL/SQL block

		Guidelines to avoid errors and handle exceptions : 

		1. Add exception handlers whenever there is any possibility of an error occuring.
		2. Add error checking code whenever you can predict that an error might occur if your code gets bad input.

		Types of exceptions : 

		1. Pre defined/System : They are automatically raised by oracle whenever a program voilates the rdbms rules. Pre defined exceptions such as syntax error or entering duplicate values in primary key field.
			 There are some system exceptions which are raised frequently so they are pre defined in oracle which is known as named system exception.

			No need to declate explicitly. Raised automatically when oracle occurs.


			EXCEPTION NAME 	   ||  	ERROR NAME   ||    REASON
			--------------------------------------------------
			NO_DATA_FOUND	   ||	ORA -01403	 ||  When a select clause do not return ant row from table
			ZERO_DIVIDE		   ||	ORA -01476	 ||	 When user attempt to divide a number by zero
			TOO_MANY_ROWS	   ||	ORA -01422	 ||	 When you select or fetch more than one reords into a single variable
			DUP_VAL_ON_INDEX   ||   ORA -00001	 ||	 When user try to store duplicate values in col that is restricted by unique key.

		SYNTAX : 

			DECLARE 
			declaration section
			BEGIN
			execution section
			EXCEPTION -------------
			when exception_name   |
			THEN 				  |
			statement; ------------
			END;

		EXAMPLE : 

			declare 
			a number := :a;
			b number := :b;
			c number;
			begin
			c:=a/b;
			dbms_output.put_line(c)
			end;

			declare 
			a number := :a;
			b number := :b;
			c number;
			begin
			c:=a/b;
			exception
			when ZERO_DiVIDE
			then 
			dbms_output.put_line('Divide by zero can cause problem')
			end;


			declare 
			x emp % rowtype;
			a int;
			begin
			select * into x from emp where esalary = 10000;
			dbms_output.put_line('name is' || x.name);
			end

		2. User defined :  Show user friendly msg for the error. 

		SYNTAX : 

			declare
			exception_name EXCEPTION;
			begin
			execution statements;
			if condition then
			raise exception_name;
		end if;
		exception
		when exception_name
		then
		handle
		end;

		
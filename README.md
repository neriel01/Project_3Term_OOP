Project_3Term_OOP
=================
 [Add comments here](https://github.com/neriel01/Project_3Term_OOP/issues/1)

##Описание требований к программе «Моя библиотека»

###1 Общая характеристика программы
Центральная идея
Эффективное хранение и манипуляция книгами, будь то домашняя библиотека или библиотека небольшого предприятия или учреждения. Книги загружаются в программу пользователем, где реализованы удобные инструменты манипуляции с ними : поиск, сортировка, человек , которому отдана книга и т.д. 
Перечень основных возможностей
1.	Добавление книг в базу программы.
2.	Поиск книги с помощью фильтра
3.	Удаление книг.
5.	Загрузка с диска файлов с книгами.
6.	Редактирование состояние книги (поношенность, дата выдачи и т. д.)

###2 Подробное описание возможностей программы
•	Интерфейс и управление
Размер окна программы – по умолчанию. Пользователь имеет возможность сделать его в удобной для себя форме. 
Основное и самое большое поле программы – подробная информация о выбранной в данный момент книге (ее наличие, автор, название, обложка и т.д.) Слева расположен список книг, с помощью него выбирается книга и отображается на основном поле программы, которое расположено в центре. Для выбора книги и ее отображения в «главном поле» необходимо кликнуть по ее названию. Над списком книг расположено поле для поиска. Что бы найти книгу, нужно ввести название в это поле. Ниже поля с книгами расположены кнопки итерфейса "Save", "Load" , "Add" , "Edit" , "Delete".  


####•	Добавление/удаление книги
Что бы добавить книгу нужно нажать на кнопку «Add» в нижней части экрана. В появившемся диалоговом окне ввести нужные данные и нажать «ОК». Если книга успешно добавлена, она появится в списке справа. ВНИМАНИЕ! НЕ ИСПОЛЬЗУЙТЕ КИРИЛИЦУ, ПРОЕКТ РАСЧИТАН НА АНГЛОЯЗЫЧНЫХ ПОЛЬЗОВАТЕЛЕЙ И ПОДДЕРЖКА КИРИЛИЦЫ В ДАННОЙ ВЕРСИИ НЕ РЕАЛИЗОВАНА!
Что бы удалить книгу нужно нажать на кнопку «Delete», предварительно выбрав книгу из спика слева.

####•	Загрузка книг с диска и сохранение на диск
Что бы загрузить всю вашу базу книг, находящуюся в программе нужно нажать
Кнопку «Save». И выбрать файл в на компьютере. Что бы загрузить файл нажмите кнопку «Load», выберите файл и нажмите кнопку «ОК». Книги из базы появятся в поле слева. 
ВНИМАНИЕ! НЕ ИСПОЛЬЗУЙТЕ КИРИЛИЦУ В ПУТИ К ФАЙЛАМ, ПРОЕКТ РАСЧИТАН НА АНГЛОЯЗЫЧНЫХ ПОЛЬЗОВАТЕЛЕЙ И ПОДДЕРЖКА КИРИЛИЦЫ В ДАННОЙ ВЕРСИИ НЕ РЕАЛИЗОВАНА!

####•	Редактирование информации о книге
Для того, что бы отредактировать информацию о книге нужно нажать на ней, и в появившемся окне поменять нужные поля.  После выполненных действий нажать «ОК»


###3 Дополнительные требования
•	Поддержка сторонних плагинов
В данной версии проекта поддержка сторонних плагинов отсутсвует.
####•	Базы книг
Файлы с базами книг генерируются непосредственно программой, сторонние файлы баз данных не поддерживаются 
##ПОЛИМОРФИЗМ
Полиморфизм в данном проете реализован в абстрактном интерфейсе работы с базой данных. В нем определены основные методы работы с БД  - Read(), Upadate(), Create(), и Delete(). Это сделано для возможности безболезненной смены БД на другую без изменения всего когда программы. Достаточно просто унаслевовать другой класс с БД с переопределенными методами  Read(), Upadate(), Create(), и Delete(). 
Эти классы описаны в файле DataAccessObject.h


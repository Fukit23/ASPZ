# Практична робота №1
В цій інструкції буде показано як правильно завантажити ubuntu на віртуальну машину.
## Завантаження
Є дві програми для використання віртуальних машин: Oracle VM VirtualBox(безкоштовна) та VMware Workstation Pro(треба платити).

Для завантаження Oracle VM VirtualBox треба перейти на офіційний [сайт](https://www.virtualbox.org/) та завантажити останню версію для совєї операційної системи. Після цього відкрити файл та виконати процедуру завантаження за інструкцією завантажуючи все що там рекомендовано.

Для завантаження VMware Workstation Pro можна перейти на офіційний [сайт](https://www.vmware.com/products/desktop-hypervisor/workstation-and-fusion) та завантажити останню версію для совєї операційної системи ~~(якщо нема куди витрачати гроші)~~. Або якщо ви не боїтесь завантажувати піратьскі файли то можете перейти по [ссилці](https://rutracker.net/forum/viewtopic.php?t=6492639) та завантажити торрент файл. Там буде три ехе файли: 

<img width="624" height="111" alt="image" src="https://github.com/user-attachments/assets/670044ed-f321-461a-91dc-b14a08b8c7cf" />

Для завантаження самої программи треба відкрити "VMware-workstation..." та виконати процедуру завантаження за інструкцією завантажуючи все що там рекомендовано. Після цього коли ви відкриєте програму вона запросить ключ програми. Для того щоб його отримати треба відкрити "VMKeygen.exe" вибрати версію програми та натиснути згенерувати, після цього ключ скопіювати та вставити у віконце запросу ключа.

Для завантаження самої системи ubuntu треба перейти на офіційний [сайт](https://ubuntu.com/download/server) та завантажити останню LTS(LTS розшифровується як довгострокова підтримка, що означає п'ять років безкоштовних оновлень безпеки та технічного обслуговування) версію Ubuntu server.

## Налаштування віртуальної машини
Налаштування буде показано на прикладі VMware Workstation Pro, для Oracle VM VirtualBox треба обирати аналогічні налаштування.

Після запуску треба обрати: File > New Virtual Machine

<img width="284" height="246" alt="image" src="https://github.com/user-attachments/assets/894ce2d6-02a2-421e-b391-f099fc28929e" />

В відкритому вікні обрати рекомендовану конфігурацію

<img width="423" height="422" alt="image" src="https://github.com/user-attachments/assets/eeba7af3-0395-4fa0-8f96-d1c59e1b8bda" />

Далі обрати iso файл для Ubuntu server який ми завантажували раніше

<img width="422" height="348" alt="image" src="https://github.com/user-attachments/assets/127b8081-a0e2-472d-9052-c8038c0f0b6c" />

Після цього обрати місце зберігання та кількість виділеного місця

<img width="427" height="420" alt="image" src="https://github.com/user-attachments/assets/de567fcd-ac46-49ec-b256-37d65b8f3ac5" /> <img width="423" height="419" alt="image" src="https://github.com/user-attachments/assets/0e79e974-b74c-42cb-9110-6df0b47158fd" />

Потім воно покаже налаштування з якими воно буде завантажувати систему, там же можна змінити. Можете налаштувати це самі під свій пк але краще використовувати ці налаштуванні, їх вистачить з головою:

<img width="383" height="152" alt="image" src="https://github.com/user-attachments/assets/7e5f8dc7-71b5-4992-a873-7a346c6c046c" />

Коли ви натисните "завершити" воно одразу запусте віртуальну машину. Одразу відкриється віконце:

<img width="702" height="397" alt="image" src="https://github.com/user-attachments/assets/902a37cd-10cb-44b9-8d5c-59199bce20a6" />

Тут треба вибрати перший пункт та дочекатеться завантаження.

Після цього відкриється вікно вибору мови, краще вибрати англійску бо воно може потім жалітися якщо щось інше обрати.

<img width="1207" height="547" alt="image" src="https://github.com/user-attachments/assets/1b87c6c5-5199-4e61-9649-63b80cf20ec7" />

В наступному вікні ми нічого не чіпаємо та ідемо далі:

<img width="1245" height="780" alt="image" src="https://github.com/user-attachments/assets/2ca1953c-612f-4588-aaad-e5089270a805" />

Тут можна перевірити підключення:

<img width="1271" height="782" alt="image" src="https://github.com/user-attachments/assets/c77786e0-381b-4914-ad2a-d224cf60320d" />

Якщо вам треба налаштовувати проксі сервер то тут можна його налаштувати:

<img width="1266" height="784" alt="image" src="https://github.com/user-attachments/assets/2c7403e3-908f-4732-93d6-b66a6257f69d" />

Далі воно підключется до сервера завантажування який вам краще всього підійде:

<img width="1232" height="776" alt="image" src="https://github.com/user-attachments/assets/f191e8fa-1bd9-42e4-af49-d85d0d070f03" />

Тут нічого не змінюємо:

<img width="1253" height="778" alt="image" src="https://github.com/user-attachments/assets/5a5ca833-9aa0-4e81-b88a-5aa502eb02f7" />

Далі можна подивитися конфігурацію, та якщо що - змінити. Якщо при натисненні "далі" воно буде на щось жалітися - пропускайте, нічого страшного не буде.

Потім треба буде зробити профіль 

<img width="1203" height="640" alt="image" src="https://github.com/user-attachments/assets/812e67f2-4fbc-49e2-ac12-ae47d343f53b" />

> [!CAUTION]
> Запишіть десь дані вашого профілю щоб не загубити їх.

Після цього воно запропонує оновити до pro версії - можна пропустити ~~, або якщо вам нема куди дівати гроші то можна і придбати~~.

Далі треба завантажити OpenSSH server:

<img width="1039" height="780" alt="image" src="https://github.com/user-attachments/assets/9fe20960-26aa-4aa5-ac32-6016cd3373b5" />

Тут можна обрати додаткові функції, обирайте на свій смак:

<img width="1111" height="784" alt="image" src="https://github.com/user-attachments/assets/72d2dc10-a57e-47aa-8f5f-a7a86647b726" />

Після цього треба дочекатися завантаження та перезавантажити.
> [!NOTE]
> Воно може запросити щось вийняти - просто натискаємо на Enter.

Далі заходимо в свій профіль який ми створювали раніше:

<img width="644" height="584" alt="image" src="https://github.com/user-attachments/assets/2735926d-ef9d-43b1-8be6-74289bc46f84" />

## Початкове налаштування системи
Відкрити термінал (Ctrl + Alt + T) та виконати:
>sudo apt update && sudo apt upgrade -y

Встановити драйвери:
>sudo ubuntu-drivers autoinstall
>sudo reboot

## Встановлення інструментів для програмування
Базовий набір
>sudo apt install build-essential git -y

Набір включає:
* gcc, g++ — компілятори
* make
* git

<img width="386" height="223" alt="image" src="https://github.com/user-attachments/assets/1eb394a2-dfc4-4fb1-8256-9ec83f5d8a21" />






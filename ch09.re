= GNU 一般公衆ライセンス

1985 年の春までに、リチャード・ストールマンは Unix 風オペレーティング・システムのために Lisp 版の Emacs を作った。GNU プロジェクトの最初の実質的成果だ。自由ソフトウェアとして他の人々が利用できるように、それをリリースする方法を開発する必要があった。それは事実上 Emacs コミューンの後継となるものだった。

改良する自由と著作者特権との間の緊張関係は GOSMACS よりも前にできていた。1976 年の著作権法は、アメリカの著作権法を見直し、著作権の法的保護をソフトウェアプログラムにまで拡大した。その法律のセクション 102（b）によれば、今や、個人と企業は「プログラムに具体化した現実のプロセスまたは方法」に対してではなく、ソフトウェアプログラムの「表現」に対して著作権を持てるようになった。@<fn>{1}

言い換えれば、これはプログラムを代数の教科書のように扱うものだった。その著者は教科書の著作権を主張できるが、代数の数学的アイデアやそれを説明するのに必要な教育的テクニックに対しては著作権を主張できない。かくして、オリジナルの Emacs のコードの使用についてストールマンが何と言っているかと無関係に、他のプログラマには Emacs のアイデアとコマンドについて自分自身の実装を書ける法的資格があり、それを実装した。Gosmacs は、様々なコンピュータ・システムのために開発されたオリジナル Emacs の三十幾つかあった模造品の一つだった。

Emacs コミューンは、ストールマン自身が書いたオリジナル Emacs プログラムのコードにのみ適用された。もしも Emacs コミューンに法的強制力があっても、それは独立して開発された模造品、たとえば Gosmacs には適用されなかっただろう。自由ソフトウェア運動の倫理的理想からすると、自由のない Gosmacs の制作は非倫理的だった。なぜなら、（占有的ソフトウェアとして）それはユーザーの自由に敬意を払わないからだ。しかし、この問題は Gosmacs の作者の理想とは無縁だった。

著作権の下では、既存のプログラムからコードをコピーしたいプログラマは（修正をともなう場合でさえ）オリジナル開発者の許可を手に入れる必要があった。ハッカーはたいてい知らなかったが、著作権表示がなくとも新法は適用された。そして著作権表示もまた現れ始めていた。

これらの表示をストールマンは占領軍の侵略の旗として眺めていた。過去のプログラムからソースコードを借りていないソフトウェアプログラムは稀だった。ところがアメリカ政府は、大統領の一筆の署名で、プログラムの再使用を禁じる法的な力をプログラマや会社に与えた。それはこれまで形式ばらないシステムだったものの中に、形式的要素を持ち込んだ。簡単に言えば、それまでハッカー間の論争で解決されたものが、今や弁護士間の論争で解決されるものになった。そんなシステムは、自動的に、ハッカーではなく会社に有利に働いた。著作権表示に個人名を記載してコードの品質に責任を負うのだと考える者もいたが、通常、著作権表示には会社名が記載されたし、書いたコードについて個人が発言するためには他の方法があった。

しかし、ストールマンは、何年間か GNU プロジェクトを率いているうちに、著作権は、著作権がカバーする一定の活動について寛大な許可を与えることができ、著作権に条件を置くこともできることに気付いた。「著作権表示つきの電子メールのメッセージに、ライセンスとして『そのままのコピーを許可する』としたものがあったんですが、」とストールマンは回想する。「それでひらめいたんです。」これらのライセンスは、ライセンスの条件を除去しないこと、としていた。ここからストールマンのアイデアまで、あと数歩だった。たとえば、許諾条件は、ユザーが修正版でさえ再配布することができ、かつ、それらは同じ許諾条件を持つようにすること、とすることが可能だった。

かくして、ストールマンは、著作権の利用は必ずしも反倫理的ではないと結論づけた。ソフトウェア著作権の駄目な点は、ユーザーに不可欠な自由を認めない著作権の典型的利用方法と利用法の設計にあったのだ。ほとんどの著作者は著作権を使う別の方法を想像することができなかった。しかし、著作権は別のやり方で使えた。それは、プログラムを自由にして、それが自由であり続けることを保証する利用方法だった。

1985 年の GNU Emacs 16 までに、ストールマンは著作権に基づくライセンスを起草したが、それはユーザーがコピーを作って配布する権利を与えるものだった。それはユーザーが修正版を作って配布する権利も与えたが、同じライセンスの下でのみ、そうすることできた。ユーザーは修正版に対して無制限の権力を行使することはできなかった。したがって、修正版を Gosmacs がそうであったように占有的なものにすることはできなかった。そして、ユーザーはソースコードを利用可能にする必要があった。それらの条件は、部外秘的で自由のない修正版の GNU Emacs を出現させうる法的隙間を閉ざしていた。

Emacs コミューンの社会契約を成文化する役に立ったが、初期の GNU Emacs のライセンスは、GNU プロジェクトが目指すものとしてはまだ「非公式的」過ぎた、とストールマンは言う。自由ソフトウェア財団を設立してまもなく、財団の他の理事や、設立を手伝ってくれた弁護士と相談しながら、ストールマンは、ライセンスをさらに完全な、乗じる隙のないものにするための作業を開始した。

ボストンの著作権法の弁護士でストールマンに最初に法的アドバイスを提供していたマーク・フィッシャー（Mark Fischer）は、この時期にストールマンと交わしたライセンス論議を次のように回想している。「リチャードは、ライセンスがどんな働きをすべきかということでは非常に強い見解を持ってましてね、」とフィッシャーは言う、「彼には、二つ原則があったんです。一つは、可能な限り、ソフトウェアを絶対的にオープンなものにする、ということ。（これを言ったとき、フィッシャーはオープンソース支持者たちに影響されていたように思う。決してストールマンはソフトウェアを「オープン」にすることを求めていたのではなかった。）もう一つは、他人にも同じライセンスを採用するように仕向ける、ということです。」ライセンスの要件は第二のゴールのために設計されていた。

この最後の条件の革命性が十分に理解されるまでには、いくらか時を要した。当時、とフィッシャーは言う、GNU Emacsライセンスを単に普通の取引と考えていた。それはGNU Emacsの使用に値札をつけていた。ストールマンはユーザーに、お金ではなく、彼らが後に加える修正にアクセスできることを要求した。こう言ってフィッシャーは、契約条項のユニークさを思い起こす。

「他人にこういう対価を受け入れるように求めるのは、唯一じゃないとしても、当時は非常に珍しいことだったと思います」と彼は言う。

GNU Emacs ライセンスを作るにあたって、ストールマンはかつての Emacsコミューンの非公式な主義に大きな変更を一つ加えた。かつてはコミューンメンバーに彼らが書いたらすべての変更を送るように要求したところで、今やストールマンは、プログラムの再配布を選択したら必ずソースコードと自由を告知することのみを要求した。言い替えれば、自家用の修正を Emacs に加えただけのプログラマは、もうストールマンにソースコードの変更を送り返す必要がなかった。自由ソフトウェアの教義のめったにない変更にあたって、ストールマンは、自由ソフトウェアの値段を切り下げることにした。どのコピーにも所持者がコピーをさらに開発して再配布する許可が付いている限り、ユーザーは肩越しに覗くストールマンぬきでイノベーションをすることができ、彼らが望むときにだけ彼らの修正版を再配布してよいことになった。

この変更は、初期の Emacs コミューンの社会契約のビッグブラザー的側面に自分自身満足していなかったことが原因だった、とストールマンは言う。
変更を彼に送るのは全員にとって有益だとは分かっていたが、これを要求することは不平等だと感じるようになった。「みんなにすべての変更を発表するように求めるのは間違っていました」とストールマンは言う。

「一人の特権的な開発者に変更を送るように求めるのは間違いでした。そんな集権化と一人のための特権は、全員が平等の権利を持つ社会とは調和しないんです。」

GNU Emacs ライセンスは、1985 年にストールマンがついに GNU Emacs をリリースしたときにデビューした。リリース後、ストールマンはライセンスの文言をどう改善したらいいかに関する一般のハッカーコミュニティからの入力を歓迎した。この提案を取り上げたハッカーの一人に、後のソフトウェア活動家で、当時サン・マイクロシステムズのコンサルタントとして働いていた、ジョン・ギルモア（John Gilmore）がいた。ギルモアはコンサルタント業務の一環として、Emacs を Unix の企業内バージョンである SunOS に移植していた。ギルモアはそうする過程で、GNU Emacs ライセンスの要求に従って変更を公表した。ギルモアは、ライセンスを負担と見るのではなく、ハッカー精神の明瞭で簡潔な表現と見ていた。「それまで、ほとんどのライセンスは非常に非公式なものでした」とギルモアは振り返っている。

この非公式ぶりの例として、ギルモアは、Unix のユーティリティ、trn の 1890 年代中ごろの著作権ライセンスを引用する。trn は、後に Unix の patch ユーティリティとスクリプト言語 Perl（パール）の作者として有名になるハッカー、ラリー・ウォール（Larry Wall）が書いたニュースリーダ・プログラムである。通常のハッカーの礼儀と、商用に公表する方法を指図する作者の権利との均衡をとるために、ウォールは、プログラムに付随する著作権表示を意見表明の手段として利用した。

//quote{
Copyright (c) 1985, ラリー・ウォール

これで金儲けするとか、これを自分が書いたふりをしない限り、trnキットの全部または一部をコピーできる。@<fn>{2}
//}

こういう表現はハッカー倫理の反映だが、倫理のゆるやかで非公式な性質を、著作権という厳密で法律的な言葉に翻訳することの難しさも反映していた。GNU Emacsライセンスを書くときに、ストールマンは占有的派生品をつくる抜け道をふさぐ以上のことをした。彼は、法律家にもハッカーにも同じように理解できる仕方で、ハッカー倫理を表現したのである。

まもなく、とギルモアは言う、他のハッカーが自分のプログラムに GNU Emacs ライセンスを「移植」する方法を議論し始めた。ユーズネットでのやりとりに刺激されて、1986年11月、ギルモアはストールマンに修正を提案するメールを送った。

//quote{
たぶん、ライセンスから「EMACS」を削除し、「ソフトウェア」とか何か別の名前で置き換えるべきです。遠からず、と希望しますが、Emacs は GNU システムの一番大きな部分ではなくなり、このライセンスが GNU システム全体に適用されることになるでしょうから。@<fn>{3}
//}

もっと一般的なアプローチをするように提案してきたのはギルモアだけではなかった。1986 年の暮までに、ストールマン自身、GNU プロジェクトの次の大きな一里塚であるソースコードデバッガー、GDB にとりかかっていた。このリリースのため、彼は、GNU Emacs にかわって GDB に適用できるように Emacs ライセンスを修正する必要があった。大仕事ではなかったものの、それは間違えるかもしれない仕事の開始だった。1989 年、ストールマンは Emacs への個別的言及を除く方法を解決して、プログラム・コードとプログラムのソースファイルの中にあるライセンスだけを結合することを表明した。このやり方なら、どのプログラマもライセンスを変更せずに、自分のプログラムにライセンスを適用することができた。GNU一般公衆ライセンス（The GNU General Public License）、略してGPLの誕生だった。GNUプロジェクトは、まもなくそれを既存の全てのGNUプログラムの公式ライセンスにした。

GPLの公表にあたって、ストールマンは、小さな変更を示すために小数を使い、
大きな変更を示すために整数を使うというソフトウェアの慣習に従った。
初版は、1989 年で、バージョン 1.0 とされた。
このライセンスには、その政治的な狙いを詳しく説明した次のような前文がついている。

//quote{
GNU 一般公衆ライセンスは、以下のことを保証するるように設計されています。
あなたが自由なソフトウェアのコピーを譲渡または販売する自由を持つこと、
あなたがソースコードを受け取る、または、欲しいときにソースコードを入手できること、あなたが本ソフトウェアを変更できる、または、新しい自由なプログラムの中でその一部を使えること、そして、あなたにこれらのことができることを知らせること。
あなたの権利を守るためには、誰かがあなたにこれらの権利を拒否したり、
放棄を求めたりすることを禁ずるように制限をかけることが必要になります。
これらの制限により、本ソフトウェアのコピーを配布するとき、
またはそれを変更するとき、あなたは一定の責任を負うことになります。@<fn>{4}
//}

ハックが進むにつれ、GPL はストールマンの最高傑作の一つになった。
それは通常は占有的な著作権法の制約の中に、共有的なシステムを創り出した。
また、さらに重要なのは、法典(リーガル・コード)とソフトウェア・コードの間にある知的類似性を実証したことだ。
GPLの前文には、暗黙裏に深いメッセージが込められている。
ハッカーは著作権法をいぶかしいものと見る代りに、それをハックされたがっているもうひとつのシステムと見るべきだ、ということだ。

「GPLは、大コミュニティを持つ自由ソフトウェアによく似た発展をしました。
コミュニティは、ソフトウェアの構造や、賛成意見と反対意見、
また広く支持されるための微調整や穏健に妥協する必要性さえ議論します」と、ジェリー・コーエン（Jerry Cohen）は言う。
彼は、ストールマンがライセンスをつくるのを手伝ったもう一人の弁護士だ。
「このプロセスは非常に良く機能しまして、GPL は、幾つかのバージョンを経ながら、広範囲の懐疑的な、時には敵意ある反応を受けるものから、広範囲の支持を受けるものへと変わっていきました。」

1986 年の Byte 誌とのインタビューで、ストールマンは面白い言葉で GPL を要約した。
ハッカーの価値観を賛美することに加えて、ストールマンは言う。
読者は、「それを知的な柔術の型としても見るべきなんです。
ソフトウェアを買い占める人達がつくった法体系を、それに対抗するために使うんですから。」@<fn>{5}
後年、ストールマンは、もう少しとげのない言葉でGPLの創造について語っている。
「ぼくは、ある意味で倫理的な、ある意味で政治的な、
ある意味で法律的な問題を考えていました、」と彼は言う。
「ぼくらがその中にいる法体系によって持続できることを試みる必要がありました。
気持ちとしては、この仕事は新しい社会の基礎となる法律を制定することなんですが、
ぼくは国じゃないから、実際に法律を変えることはできません。
こうしたことのために設計されていない既存の法体系の上に増築することで、これを試みる必要がありました。」

自由ソフトウェアに関わる倫理的、政治的、法的問題をストールマンが考えている頃、ドン・ホプキンス（Don Hopkins）というカリフォルニアのハッカーが、彼に 68000 マイクロプロセッサーのマニュアルを郵送してきた。
Unix ハッカーで SF マニア仲間のホプキンスは、
ストールマンからそのマニュアルを借りていたのだ。
ホプキンスは感謝のしるしに地元の SF 大会で入手したステッカーをたくさん貼って返信封筒を飾っていた。そのステッカーの一枚が、ストールマンの目にとまった。
そこには、"Copyleft (L), All Rights Reversed" とあった。
ストールマンはステッカーにヒントを得て、GNU Emacs ライセンスで（そして後に GPL で）使われた法的テクニックに「コピーレフト」という愛称をつけた。ユーモラスな、丸に逆向きの C がそのシンボルだ。
時とともに、その愛称は、「あるプログラムを自由ソフトウェアにし、
そのプログラムを修正・拡張した版も同じように自由ソフトウェアにすることを要求する」著作権ライセンスの手法全般を表現する自由ソフトウェア財団の専門用語になった。@<fn>{6}

かつてドイツの社会学者、マックスウェーバーは、すべての偉大な宗教はカリスマの
「ルーチン化」と「制度化」の上に成り立っていると唱えた。すべての成功した宗教は、
カリスマまたは初代宗教指導者のメッセージを文化や時代を超えて容易に翻訳可能な、社会的、政治的、倫理的な装置に転換する、とウェーバーは論じた。

本来、宗教的なものではないが、GNU GPL は、ソフトウェア開発という現代的で分権的な世界で機能しているこの「ルーチン化」プロセスの興味深い実例に確かにふさわしい。
その公開以来、他の点ではストールマンに少しも忠誠心を表明しないプログラマや企業が GPL の取引を額面通りに喜んで受け入れてきた。自身のソフトウェアプログラムの先制的防御メカニズムとして GPL を受け入れる者さえある。GPL の条件を制約が強すぎるとして拒絶する者でさえ、その影響力を認める。

キース・ボスティック（Keith Bostic）は、後者のグループに属するハッカーの一人で、GPL1.0 がリリースされたときはカリフォルニア大学の職員だった。ボスティックの所属部署、コンピュータシステム研究グループ（SRG）は、1970 年代後半から Unix の開発に関わり、現代のインターネット通信の土台になる TCP/IP ネットワークプロトコルを含む、多くの主要部品に責任を持っていた。
1980 年代の終り頃になって、Unix という商標の最初の保有者である AT&T は Unix の商品化に力を入れ始め、ボスティックと彼のバークレーの同僚が開発している Unix のアカデミックバージョン、BSD（バークレー・ソフトウェア・ディストリビューション）を、商業的テクノロジーの主要な源泉として期待し始めていた。

ボスティックと友人達によって書かれたコードは、ほとんど誰にとっても使用禁止状態だった。占有的な AT&T のコードと混ざり合っていたからだ。その結果、バークレー・ディストリビューションは、AT&T から Unix のソースコードライセンスをすでに取得した施設のみが利用できた。
（学問的世界のみを考えている人々にとって）最初は無害に見えたこの仕組みは、AT&T がライセンス料を値上げしたとき、だんだん重荷になった。
バークレーのコードを GNU で使うために、ストールマンは、それを AT&T のコードから切り離し、自由ソフトウェアとしてリリースするようにバークレーを説得する必要があった。1984 年または 1985 年に、彼は奮闘する BSD のリーダーたちと会い、AT&T はチャリティーではなく、大学がその成果を（事実上）AT&Tに寄付するのはふさわしくないと指摘した。彼はコードを取り出して自由ソフトウェアとしてリリースしてくれるように頼んだ。

1986 年に雇われて以来、ボスティックには、デジタル・イクイップメント社の PDP-11 に BSD を移植するという個人的なプロジェクトがあった。ちょうどこの頃、とボスティックは言う、たまたま西海岸に遠征してきたストールマンと親密に交流するようになった。
「ストールマンと著作権の議論をしたことを、鮮明に覚えています。ストールマンは、CSRG で借りたワークステーションの前に座っていました、」とボスティックは言う。
「それからディナーに行きましたが、ディナーの最中も著作権について議論を続けました。」

ストールマンの好む形にはならなかったが、その議論は最終的に実を結んだ。1989 年 6月、バークレーは、そのネットワークコードを AT&T の保有する OS の残り部分から切り離し、著作権をベースにした自由なライセンスで配布し始めた。
そのライセンスの条件は寛大だった。
すなわち、ライセンスをうけるすべての人は、派生的プログラムを広告するときは、
カリフォルニア大学のクレジットを出すこと。6
GPL とは対照的に、占有的な派生物は許可された。
一つの問題だけがライセンスの急速な採用を妨げた。
BSD ネットワーキング・リリースは、完全なオペレーティング・システムではなく、ネットワーク関連の部分に過ぎなかったのだ。
そのコードは、全ての自由なオペレーティング・システムに対する大きな貢献であったにもかかわらず、それを走らせるには、他の占有的なライセンスのコードと一緒にしなければならなかった。

それから数年間、ボスティックと他のカリフォルニア大学の職員は、足りない部品を置き換えて BSD を完全な、自由に再配布可能なオペレーティング・システムにするために働いた。
Unix の商標を管理する AT&T の子会社、ユニックス・システムズ・ラボラトリーが法的な異議を出して遅れたが、努力は、1990 年代の初めに結実した。
しかし、それ以前から、多数のバークレーのユーティリティがストールマンの GNU システムに貢献していた。

ボスティックは回想して言う、「GNU の刺激がなかったら、実際にやったほど力を入れて進めることはなかったと思います。彼らが熱心に活動している領域が重要なのは明白だったし、ぼくらは、そのアイデアが好きだったんです。」

1980 年代終りには、GPL は、自由ソフトウェアのコミュニティに重力効果を及ぼし始めた。BSD ユーティリティの事例に見られるように、自由ソフトウェアと認められるのにライセンスを GPL にする必要はなかったが、プログラムを GPL の下に置けば明確なメッセージが送られることになる。「GPL があったから、みんなが自分たちが作っているのが自由なソフトウェアなのかどうか、どんなライセンスにするかを、とことん考えるようになったと思う。」とブルース・ペレンス（Bruce Perens）は言う。
彼は、Unix の人気のユーティリティ、エレクトリック・フェンスの作者で、後の Debian GNU/Linux 開発チームのリーダーだ。GPL のリリースから数年後、ストールマンの弁護士審査済みライセンスを支持して、自家製のエレクトリック・フェンスのライセンスは捨てることにしたとペレンスは言う。「それは実際とても簡単でした」とペレンスは回想する。

リッチ・モーリンは、ストールマンが最初に GNU をアナウンスしたときいくらか懐疑的に見ていたプログラマだったが、GPL の傘の下に集まり始めたソフトウェアに強い印象を受けたと回想している。SunOS ユーザーグループのリーダーとして、1980 年代のモーリンの主な任務の一つは、最良のフリーウェアか自由ソフトウェアのユーティリティを収録したディストリビューションテープを発送することだった。
その仕事をしていると、プログラムの原作者に、プログラムは著作権で保護されているのか、それともパブリックドメインに委ねられているのか、確認の電話をかけねばならないことがしばしばだった。1989 年頃、一番優れたソフトウェアプログラムはいつも決まって GPL のライセンスを採用していることに気付き始めたとモーリンは言う。
「ソフトウェアのディストリビュータとして、GPL という言葉を見たら、これは楽勝だとわかりました。」とモーリンは回想する。

Sun ユーザーグループのためにディストリビューションテープをまとめる手間の埋め合わせに、モーリンは受取人に手数料を請求していた。
だが、GPL を採用したプログラムの場合には、モーリンは突然以前の半分くらいの時間でテープをまとめられるようになり、かなりのもうけが出るようになった。
商機を感じて、モーリンは自分の趣味にビジネスとしての新しい名前をつけることにした。名付けて、プライムタイム・フリーウェアと言う。

そういう営利的利用は、自由ソフトウェアの予定範囲内にある。
「私たちがフリーなソフトウェアと言うとき、それは自由（フリーダム）について語っているのであって、価格のことではありません。」
GPL の前文の中でストールマンはそうアドバイスした。
1980 年代の終わり頃、ストールマンはそれをもっと簡単で覚えやすい形に洗練した。
「フリービール（無料のビール）のフリーじゃなくて、
フリースピーチ（言論の自由）のフリーだと思ってください。」

大部分の企業は、ストールマンの嘆願を無視した。
しかし、何人かの起業者にとって、自由ソフトウェアが意味する自由は、
自由市場の意味の自由だった。
ソフトウェア所有権を商業的方程式からはずせば、
弱小なソフトウェア会社でも、世界の IBM や DEC と自由に競争できる状況が生まれた。

この考え方を理解した最初の起業者の一人がマイケル・ティーマン（Michael Tiemann）だ。彼はソフトウェアプログラマでスタンフォード大学の大学院生だった。
1980 年代のティーマンは、お気に入りのアーチストの後に続こうとする野心的なジャズミュージシャンのように GNU プロジェクトについていった。
しかし、1987 年に GNU C コンパイラつまり GCC がリリースされる頃には、
自由ソフトウェアの潜在力を全面的に理解し始めていた。
GCC を「爆弾」と呼ぶティーマンは、
このプログラムの存在自体がストールマンのプログラマとしての決意を物語っていたと言う。

「ちょうど、どの作家も偉大なアメリカの小説を書くことを夢見るように、
1980年代のプログラマは偉大なアメリカのコンパイラを書くことについて語っていたんだ。」とティーマンは回想する。「突然、ストールマンはそれをやってしまった。恐れ入った。」

「君は、一つだけ欠けていた物の話をしているけど、GCC がそれだった。」
とボスティックも繰り返す。「当時、GCC ができるまでは、誰もコンパイラなんて持ってなかったんだ。」

ティーマンはストールマンと競うより、彼の仕事の上に増築することに決めた。
GCC のオリジナルバージョンのコードは、110,000 行もあったが、
プログラムは驚くほど理解しやすいものだった、とティーマンは回想する。
事実、とてもやさしかったので、5 日足らずでマスターし、
もう一週間かけてソフトウェアを新しいハードウェアプラットフォーム、
ナショナル・セミコンダクターの 32032 マイクロチップに移植した、
とティーマンは言う。
それから一年間、C と並んで C++ も扱えるように GCC を拡張することで、C++ プログラム言語の「ネイティブ」な、つまり直接的なコンパイラをつくろうとして、
ティーマンはソースコードをいじっていた。（既存の C++ 言語の占有的実装は、C 言語に変換してから、次に、その結果を C コンパイラに食わせるものだった。）
ある日ティーマンは、ベル研でこのプログラムについてレクチャーをしたとき、
同じ事を達成するために奮闘している AT&T の開発者に出会った。

「部屋には、四、五十人の人がいて、何人がネイティブコードのコンパイラに取り組んでいるのか聞いてみたんだ。」とティーマンは回想する。
「主催者は、その情報は秘密だけど、部屋を見渡せばある程度のことはわかるだろう、って言うんだ。」

頭の中で電球がぱっと明るくなるのにそう時間はかからなかった、とティーマンは言う。
「六ヶ月間そのプロジェクトに取り組んでいたところだった、」とティーマンは言う。
「密かに思ったんだ。私かコードは、自由な市場が報酬をくれる能力のレベルまで来てるぞって。」

ティーマンは、GNU マニフェストの中にさらなるインスピレーションを感じた。
マニフェストは占有的ソフトウェアベンダーの貪欲を激しく非難する一方で、会社が、
消費者の視点から自由ソフトウェアの利点を考え、企業活動にあたって自由ソフトウェアを使用し、再配布することを奨めていた。GPL は、商業的ソフトウェアの問題から独占の力を取り除くことによって、
最もスマートなベンダーがサービスに基づいて競争することを可能にする。サービスは単純な技術サポートから個別の依頼者の必要に応じた自由なプログラムの拡張のトレーニングまで広がっている。

1999 年のエッセーで、ティーマンはストールマンのマニフェストの衝撃を回想する。
「それは社会主義者の議論のようにも読めるが、私は別の何かを見ていた。
変装したビジネスプランを見ていたのだ。」@<fn>{7}

このビジネスプランは新しいものではなかった。80 年代後半に、ストールマンは小規模にこれをやることで自分を支えていた。しかし、ティーマンはそれを新しいレベルに持って行こうとしていた。ティーマンはジョン・ギルモアとデヴィッド・ ウォリス（David Vinayak Wallace）とチームを組んで、GNU プログラムのカスタマイズに特化したソフトウェアのコンサルティングサービスを立ち上げた。シグナスサポート（Cygnus Support）と称するその会社が、最初の開発契約にサインしたのは 1990 年 2 月のことだ。その年の暮には、会社はサポートと開発契約で 725,000 ドル相当の財産を手にしていた。（シグナスは、非公式的に、"Cygnus, Your GNU Support" の再帰的頭字語である。）

ストールマンが構想した完全な GNU オペレーティング・システムはソフトウェア開発ツール以上のものを必要としていた。1990 年代に、GNU はコマンドライン・インタープリター、すなわち、「シェル（Shell）」も開発した。それはボーン・シェルを拡大し、置き換えたものだ（FSF の職員のブライアン・フォックス（Brian Fox）が書き、ストールマンが Bourne Again Shell すなわち BASH と命名）。PostScript のインタープリターの Ghostscript、文書ブラウザ・プラットフォームの Texinfo、プログラムを走らせ、システム・カーネルとやりとりするために C 言語のプログラムが必要とする C Library、表計算ソフトの Oleo（「高価な表計算ソフトより健康志向の」）があり、さらに、かなり良いチェス・ゲームさえあった。しかし、たいていプログラマは、GNU プログラミング・ツールに最も関心があった。

GNU Emacs、GDB、GCC は、開発者向けツールの「ビッグスリー」だが、GNU プロジェクトが 80 年代に開発したのはそれだけではない。1990 年までに、ビルド・コントローラーの Make、パーサー・ジェネレーターの YACC（Bison と改名）、awk（gawk と改名）も作った。
GCC と同様、どの GNU プログラムも、一つのベンダーのプラットフォームだけでなく、様々なシステムで走るように設計されねばならなかった。
プログラムをより柔軟にしていく過程で、ストールマンと彼の協力者たちはしばしばそれらをより便利なものにした。

GNU の普遍主義的アプローチを回想して、プライムタイム・フリーウェアのモーリンは、hello という平凡だが重要なソフトウェアパッケージを指摘する。
「C で書かれた 5 行の hello world プログラムなんですけど、
まるで GNU ディストリビューションみたいにパッケージングされていたんです」
とモーリンは言う。
「だから、それには Texinfo や configure の材料があり、
パッケージを様々な環境にスムーズに移植できるようにするために GNU プロジェクトが提供するその他のソフトウェアエンジニアリング用の付随物を備えていました。それは途方もなく重要な仕事で、すべての[ストールマンの]ソフトウェアに影響しているだけでなく、GNU プロジェクトの他のすべてのソフトウェアにも影響しています。」

ストールマンによれば、ソフトウェアプログラムをつくることが第一で、
改良は二義的なことだった。
「各構成要素について、ぼくはそれを改良する方法を見つけることもあるでしょうし、
見つけないこともあるでしょう」とストールマンは Byte 誌に語っている。
「ぼくは、ある程度まで再実装から利益を得ています。再実装すると大抵のシステムはずっと良くなるんです。それは、ある程度まで、ぼくがこの分野に長いこといて、他の多くのシステムでも仕事をしてきたからだと思います。だから、ぼくは沢山のアイデアを持ち込めるんです。」@<fn>{8}

だが、1980 年代の終わり頃に GNU ツールが有名になるにつれてまもなく、AI ラボ仕込みのストールマンの設計の入念さの評判は、あらゆるソフトウェア開発コミュニティの伝説になった。

1980 年代の終わり頃の Sun ユーザーで、1990 年代には自身の自由ソフトウェアのプロジェクト、Samba を運営することになるジェレミー・アリソンは笑いながらその評判を回想してくれた。アリソンは、1980 年代の終わり頃に Emacs を使い始めた。
コミュニティ開発モデルに刺激されて、とアリソンは言う、ソースコードの断片を送ったけれども、ストールマンに却下されただけだった。

「Onion の見出しみたいだったね」とアリソンは言う。「『子供、神に祈るが答えはノー』ってね。」

GNU プロジェクトがユーザーレベルのプログラムとライブラリの創造で成功から成功へと活躍していたときに、カーネルの開発は遅延していた。カーネルは、他のプログラムのプロセッサへのアクセスとマシンのリソース全体へのアクセスをコントロールする「交通警官」プログラムだ。

他の主なシステム・コンポーネントの幾つかがそうであるように、ストールマンは修正するための既存のプログラムを探すことからカーネル開発を始めた。1980 年代末の GNU プロジェクトの評論誌「グニュース・レターズ」は、Pastel から GCC を造ろうとした初期の試みのように、このアプローチは最善ではなかったことを示している。1987 年 1 月のグニュースレターによれば、GNU プロジェクトはすでに MIT で開発された Unixカーネル、TRIX のオーバーホールに取り組んでいた。しかし、ストールマンは実際のところ、これを試みようとしていなかった。GCC をやっているところだったからだ。後に、彼は TRIX で良い出発点を得るには余りに多くの変更を必要をとしすぎると結論づけた。1988 年 2 月までに、その月のニュースレターによると、GNU プロジェクトは、カーネギーメロン大学で開発された軽量の「マイクロカーネル」、Mach（マーク）に関心を移したとアナウンスした。Mach は自由ソフトウェアではなかった。しかし、その開発者たちは、非公式に、それを自由なものにすると言っていた。そうなったのは 1990 年で、オフィシャルな GNU プロジェクトのカーネル開発が現実に開始された。@<fn>{9}

カーネル開発の遅れは、この時期、ストールマンにのしかかっていた多くの懸念の一つに過ぎなかった。1989 年、ロータス・デベロップメント・コーポレーションは、
人気の表計算プログラム、ロータス 1-2-3 のメニューコマンドを模倣したという理由で、
ライバルのソフトウェア会社、ペーパーバック・ソフトウェア・インターナショナルに対する訴訟を起こした。ロータスの訴訟は、アップルとマイクロソフトの「ルックアンドフィール」の戦いとともに、GNU システムの未来を危険なものにしていた。どちらの訴訟も GNU プロジェクトを直接に攻撃しているものではなかったが、多くの GNU プログラムがそうであるような、既存のプログラムと互換性のあるプログラムを開発する権利を脅かしていた。これらの訴訟はソフトウェア開発文化全体にぞっとする効果（chilling effect）を及ぼしかねなかった。
何とかすべきだと決心したストールマンと数人の教授は The Tech（MITの学生新聞）に広告を載せ、その訴訟を非難して、ロータスとアップルのボイコットを呼びかけた。
彼は、訴訟をしている会社に抗議するグループの組織化に手を貸して、広告後の行動を支援した。
プログラミングの自由同盟と名乗ったそのグループは、
ロータスのオフィスの外で抗議行動を行った。

これらの抗議行動は注目に値した。@<fn>{10}

これらはソフトウェア産業が進化していく性質を持っていることの記録になっている。
企業の主戦場は、いつのまにかオペレーティング・システムからアプリケーションに置き換っていた。
自由なソフトウェアのオペレーティングシステムを造ることを追求しながら、未だに実現されていないために、流行と成功が一番の価値観になっている人々からすれば、GNU プロジェクトは絶望的に時代遅れに見えた。
ストールマンが「ルックアンドフィール」訴訟との戦いに献身するまったく新しいグループを集める必要性を感じている事実そのものが、一部の観察者の目には FSF は時代遅れだと考えさせるものに映った。

しかしながら、ストールマンには戦略的な理由があった。新しい独占企業が押し付けてきたソフトウェア開発に対するペテンには別々の組織で戦うのだ。占有的なソフトウェアの開発者もそれに加わるだろう。著作権をインターフェースをカバーするものに拡大することは、多くの自由ソフトウェア開発者と並んで多くの占有的ソフトウェア開発者を脅威にさらす。これらの占有的ソフトウェア開発者は自由ソフトウェア財団を支持することを望まないだろうが、プログラミングの自由同盟には、ことさら彼らを追い払うようなものは何もなかった。同じ理由から、ストールマンはプログラミングの自由同盟のリーダーシップをそれがものになりそうになるとすぐに手放した。

1990 年に、マッカーサー財団（the John D. and Catherine T. MacArthur Foundation）がストールマンにマッカーサー・フェローシップを与えることで、彼を天才と認定したことから、ストールマンはいわゆる「ジーニアス(天才)助成金」を受け取ることになったが、この場合には 5 年間で総計 24 万ドルだった。財団は受賞理由の声明を出さなかったが、これは GNU プロジェクトを立ち上げ、自由ソフトウェアの哲学を提唱したことに贈られたものとして理解された。賞金はストールマンを当面の幾つかの心配事から解放した。たとえば、それは 80 年代に彼の収入源だったコンサルティングの仕事をやめて自由ソフトウェアの大義にもっと専念することを可能にした。

受賞はストールマンが正常に投票登録できるようにもしてくれた。ストールマンは 1985 年に住んでいた家が火事にあって公式の住所を失ったままになっていた。また、火事は彼の本も大部分灰にしてしまったが、これらの「不潔な本」の掃除も満足な結果を与えるものではなかった。そのとき以来、ストールマンはテクノロジー・スクエア 545 の「不動産占有者（squatter）」として生活していたが、投票は「家のない人（homeless person）」としてせざるを得なかった。@<fn>{11}「[ケンブリッジ選挙委員会は]それをぼくの住所と認めたがらなかったんです。」とストールマンは回想している。「マッカーサー助成金の新聞記事がそのことを書いたら、ぼくは登録されたんです。」@<fn>{12}

最も重要なことは、マッカーサー・フェローシップは、ストールマンにプレスの関心と講演の招待を与えたことで、彼はそれを使い、GNU と自由ソフトウェア、「ルック・アンド・フィール」訴訟やソフトウェア特許の危険のニュースを広めるために使った。

興味深いことに、GNU システムの完成は、これらの旅行の一つに端を発している。1991 年の 4 月にストールマンは、フィンランドのヘルシンキ科学技術大学を訪れた。聴衆の中には 21 歳のリーナス・トーバルズがいた。彼は、リナックス・カーネルを開発し始めようとしていた。GNU システムに残っていた最も大きな隙間を埋める運命にある自由ソフトウェアのカーネルだ。

当時、すぐそばにあるヘルシンキ大学の学生だったトーバルズは、ストールマンをぼんやり眺めていた。2001 年の自伝『それがぼくには楽しかったから』の中で、トーバルズは、「ぼくは初めて、型どおりに長髪で髭をはやしたハッカーの典型を見た。ヘルシンキにはあまりいない人だった。」と回想している。@<fn>{13}

ストールマンの議題の「社会政治的な」側面はピンとこなかったが、トーバルズは議題の基底をなす論理、エラーのないコードを書くプログラマなんていない、を高く評価した。特定の好みに合わせてプログラムを修正するユーザーの要望がないときでさえ、いかなるプログラムも改良できるのである。
ソフトウェアを共有することで、ハッカーは貪欲やエゴの防衛といった個人的な動機より、プログラムの改良を優先するのだ。

トーバルズは同世代の多くのプログラマと同様、IBM 7094 のようなメインフレームコンピュータではなく、雑多な取り合わせの自家製コンピュータで爪を研いでいた。
トーバルズは、大学の学生として、大学のマイクロ VAX を使いながら、PC プログラミングから Unix プログラミングへと進んでいった。この段階的前進は、マシンアクセスへの障害に関してトーバルズに別の展望を与えた。ストールマンにとって、主な障害は官僚主義と特権だった。トーバルズにとって、主な障害は地理とヘルシンキの厳冬だった。
自分の Unix のアカウントにログインしたいだけなのに、ヘルシンキ大学まではつらい道のりを歩かないといけなかった。
そこですぐ、トーバルズはキャンパスから離れたアパートの暖かい部屋からログインする方法を探し始めた。

トーバルズは Minix（ミニックス）を使っていたが、それはオランダの大学教授、アンドリュー・タネンバウム（Andrew Tanenbaum）が教育的手本として開発した自由のない軽量システムだった。@<fn>{14} それは自由のない自由大学コンパイラ・キットに加えて、タネンバウムが 1983 年の手紙でストールマンを軽蔑的に招待した類いのユーティリティを含んでいた。@<fn>{15}

Minix は、トーバルズの 386PC のメモリーの限界内に収まったが、実用というより教材用だった。Minix システムは、ターミナル・エミュレーションの装備も欠けていたが、ターミナル・エミュレーションは典型的なディスプレイ・ターミナルをまねして、自宅からトーバルズがマイクロ VAX にログインすることを可能にするものだった。

1991 年初頭に、トーバルズはターミナル・エミュレーションのプログラムを書き始めた。彼は自分のエミュレータの開発に Minix を使ったが、エミュレータは Minix では走らなかった。それは、スタンドアローン・プログラムだった。次に、彼はそれに Minix のファイルシステムにあるディスク・ファイルにアクセスする機能を与えた。その頃、トーバルズは彼の進化していく作品を「GNU/Emacs のターミナル・エミュレーション・プログラム」と呼んでいた。@<fn>{16}

Minix が多くの重要な機能を欠いていたので、トーバルズは、彼のターミナル・エミュレータをMinix のカーネルにカーネル互換性を持つものへと拡張し始めた。ただ、モノリシックにした点は別だった。彼は意欲的に、Minix のニュースグループに、Unix 互換カ−ネルの標準仕様書、POSIX（ポジックス）規格のコピーを求めた。@<fn>{17} 数週間後、カーネルと GNU プログラムの幾つかをまとめ、それらが一緒に動作するように調整し、トーバルズはメッセージをポストした。それは 1983 年のストールマンの最初の GNU のポストを連想させる。

//quote{
minix を使っているみなさん、こんにちは。

いま 386 (486) 互換機用に（自由な）オペレーティング・システムを作っています
（ただの趣味なので、GNU のように大きく、専門的なものにはならないでしょう）。
四月から暖めてきましたが、ようやく準備ができてきたところです。
minix の好きなところ／嫌いなところを教えてもらえませんか。
というのは、ぼくの OS は minix にいくらか似ているからです
（とくに（ごく実際的な理由から）ファイルシステムの物理的なレイアウトは同じです）。bash (1.08)と gcc (1.40)を現在移植中です。. . . @<fn>{18}
//}

この投稿が少しばかり反応を引き出したので、一月たたないうちにトーバルズは、
オペレーティング・システムのバージョン 0.01、
すなわち、ありうる最も初期段階の外部レビュー可能なバージョンを、
インターネットの FTP サイトにポストした。
この過程で、トーバルズはこの新しいシステムに名前をつけなければならなくなった。
トーバルズは、自分のパソコンのハードディスク上には、
このプログラムを Linux（リナックス -- 現在普及している英語的な発音。もとの発音に近いのはリヌックス）という名前で保存していた。
Unix の変種に名前を与えるときのしきたりを尊重して末尾に X をつけていた。
この名前は「自己中心的」すぎると思って、トーバルズはフリークス（Freax）という名前に変えたのだったが、FTP サイトの管理者に元の名前に戻されてしまった。

トーバルズが、自由なオペレーティング・システムを書いているところだと言い、それを GNU と対比していたことは、彼が完成したシステムを意味していたことを示している。しかし、彼が実際に書いていたものは純然たるカーネルだった。トーバルズはカーネルのほかにはそれ以上書く必要がなかった。なぜなら、彼が知っていたように、他に必要なコンポーネントは GNU や他の自由ソフトウェア・プロジェクトの開発者のおかげで、すでに利用可能になっていたからだった。GNU プロジェクトが GNU システムのためにそれら全てを使うことを望んで以来、それらは必然的に一緒に動作した。トーバルズがカーネルの開発を続けていた間、彼（と後の彼の協力者）もまたそれらのプログラムを動作させた。

当初、Linux は自由ソフトウェアではなかった。そのライセンスは自由の要件を満たさなかった。商業的配布を認めていなかったからである。トーバルズは企業が急襲して彼から Linux を取り上げてしまうんじゃないかと心配していた。しかし、トーバルズは GNU/Linux の組み合わせが人気を獲得するにつれ、コピーの販売はコミュニティに有益だと考えるようになった。そして、乗っ取りに対する懸念は心配するまでもないと感じ始めた。@<fn>{19} そこで、Linux のライセンスを考え直すことにした。

Linux を GCC でコンパイルしても、Linux で GCC を走らせても、GNU GPL で Linux をリリースする法的必要性はなかったが、トーバルズが GCC を使っていることは、他のユーザーにそれを借用させる道徳的責任を含意していた。トーバルズが後に述べたように、「ぼくは巨人の肩の上に乗っていた」のだった。@<fn>{20} 彼が、他の人が同じような支援のために彼をあてにしてきたときに何が起きるか考え始めたのは驚くに当たらない。
決断の十年後に、トーバルズは自由ソフトウェア財団のロバート・シャッセルに、
当時の彼の考え方を要約して鸚鵡返ししている。

//quote{
人生の半年をこれに費やし、それを使えるものにし、
何か重要なものをそれから得ようとしたけれど、
他人はそれに便乗するだけ、というようにはしたくなかった。
ぼくは[Linux を]みんなに見えるようにして、
人々が心に描く内容に合わせてそれを変更したり改良したりしようと思いました。
でも、みんながしていることも、ちゃんとわかるようにしたかったんです。
自分がいつでもソースにアクセスできるようにしておいて、
誰かが改良を加えたら、それを自分のものにできるようにしたかったんです。@<fn>{21}
//}

リナックスのバージョン 0.12 は、初めて完全に統合された GCC を含むバージョンだったが、そのリリースのとき、トーバルズは自由ソフトウェア運動への忠誠を発言することに決めた。彼は古いカーネルライセンスを捨て、それを GPL に置き換えた。3 年たたないうちに、Linux の開発者はカーネルの Linux 1.0 をリリースした。カーネルは、GNU プロジェクトその他からのプログラムで構成された殆ど完成した GNU システムとともにスムーズに動作した。事実、Linux を加えたことにより、Linux の開発者は、GNU オペレーティング・システムを完成させていたのだった。出来上がったシステムは基本的に GNU プラス Linux だった。しかしながら、トーバルズと彼の友人達は、それを混同を引き起こす Linux として言及した。

1994 年には、この寄せ集めのオペレーティングシステムはハッカー界で十分な尊敬を勝ち得ていたが、観察者の中には、プロジェクトの最初の数ヶ月のうちにトーバルズが GPL に切り替えることで、農園を手放すようなことをしていなかったらどうなっていただろう、と思う者もいた。リナックスジャーナルの創刊号で発行者のロバート・ヤングは、トーバルズとのインタビューの席についていた。ヤングがこのフィンランド人プログラマに、リナックスのソースコードの私的所有権を放棄したことを後悔していないのかと聞くと、トーバルズはしていないと答えた。
「とても賢い後知恵で考えても、そうです」とトーバルズは言った。
リナックスのプロジェクトが初期段階で下した「最良の設計上の意志決定の一つ」が GPL だったと彼は考えていた。@<fn>{22}

この決定が、ストールマンや自由ソフトウェア財団に全くアピールせず、関心もひかなかったことは、GPL の広範な普及を物語っている。ストールマンに認識されるまでに数年かかったが、リナックス開発の爆発性は、かつての Emacs を彷彿とさせる。
しかし、今回、爆発を引き起こした革新は Control-R のようなソフトウェアハックではなく、PC アーキテクチャ上で Unix 風システムを走行させることの新規性だ。
動機は違うかもしれないが、最終結果は倫理上の仕様に合致している。
すなわち、すべて自由ソフトウェアで構成された完全に機能するオペレーティング・システムである。

comp.os.minix ニュースグループへの最初のメールメッセージが示すように、トーバルズがリナックスを、GNU 開発者が HURD カーネルを提供するまでのつなぎ以上の何物かだと認識するまで、数ヶ月を要した。トーバルズに関する限り、彼は、単に楽しいだけで分解しては組み立てる子供たちの長い系譜の最近の一人にすぎなかった。
とはいえ、打ち捨てられたコンピュータのハードドライブの上で余生を送ることになってもおかしくなかったプロジェクトが、
とてつもない成功を収めたことを総括して、
トーバルズは、支配権を放棄し、
GPL という取引を受け入れる知恵を持っていた若き日の自分を評価する。

1991 年のストールマンの科学技術大学での講演と、それに続く GPL への切り替えという決定を回想してトーバルズは次のように書いている。「ちゃんと理解してはいなかったかもしれないが、少なくとも彼の話の一部は頭の中に染み込んだんだと思う。」@<fn>{23}

==== 後注

//footnote[1][Hal Abelson, Mike Fischer, and Joanne Costello, "Software and Copyright Law," 改訂版 (1998) を参照。 http://groups.csail.mit.edu/mac/classes/6.805/articles/int-prop/software-copyright.html ]

//footnote[2][trn キットの README を参照。 http://stuff.mit.edu/afs/sipb/project/trn/src/trn-3.6/README ]

//footnote[3][ジョン・ギルモアの著者への e メールから引用。]

//footnote[4][リチャード・ストールマン他、『GNU一般公衆ライセンス 第１版』(1989年2月) を参照。 http://www.gnu.org/licenses/old-licenses/gpl-1.0.html ]

//footnote[5][デイビット・ベッツ、ジョン・エドワード「リチャード・ストールマンがバイト誌編集者と彼のパブリック・ドメインの[原文のまま\] Unix 互換ソフトウェアシステムについて語る」BYTE 誌 (1996 年 7 月) 参照(GNU プロジェクトのウェブサイトに再録。 http://www.gnu.org/gnu/byte-interview.html )。 このインタビューは、GNU プロジェクトを始めた頃のストールマンの政治姿勢について、 率直さはもちろんだが、興味深いものを垣間見せてくれる。 ストールマンの言い回しの変化を跡付けるためにも有益だ。 GPL の目的を説明するために、ストールマンは次のように言っている。「ぼくは、知識と情報一般に人がアプローチする方法を変えようとしている。知識を私物化しようとすること、人が知識を使っていいかどうかコントロールしようとすること、他人が知識を共有しようとするのをやめさせること、これらは生産妨害だと思う。」 / 2000 年 8 月の著者への次の声明とこれを対比されたい。「あなたの思考の中で『知的財産』という用語を使わないように説得したい。それは事態を誤解するように導くでしょう。なぜなら、その用語は、著作権、特許権、商標権を一緒くたにしているからです。これらの効果は非常に異なっています。それらを同時に語ろうとするのは全く馬鹿げています。もし誰かが知的財産について、カッコ付きじゃなくて何か言っているときは、その人は不明瞭に考えているから唱和すべきじゃないのです。」 [RMS:  その対比が示すものは、ぼくが一般化に対して、より注意深くなることを学んだということだ。今日では、おそらくぼくは「知識の私物化」について語らないだろう、なぜなら、それは非常に広い観念だからだ。しかし「知識の私物化」は「知的財産」と同じような一般化ではない。これらの三つの法律の間の違いは、知識の私物化についてのいかなる法的問題の理解にも、決定的だ。特許権は一定の知識を使うことへの直接的独占だ。それは実際に「知識の私物化」の一形態だ。著作権は知識を体現する、または解説する作品の共有を止めるために使われる手法の一つで、全く違った事柄だ。他方、商標は知識という主題とはほとんど関係がない。\]]

//footnote[6][カリフォルニア大学の「うざったい広告条項」は、その後、問題があることが明らかになった。ハッカーの中には、GPL よりも穏やかな制限を求めて、カリフォルニア大学のライセンスを「カリフォルニア大学」というところだけ自分の組織の名前に置き換えて使っていた者もいた。その結果、他のプログラムから数十ヶ所借りているプログラムは、数十ヶ所の組織名を広告で引用する必要があった。1999 年、ストールマン側の十年がかりの働きかけを経て、カリフォルニア大学はこの条項を削ることに同意した。BSD ライセンスが抱える問題参照。http://www.gnu.org/philosophy/bsd.ja.html ]

//footnote[7][マイケル・ティーマン、「シグナスソリューションズ社の将来性」『オープンソース』（1999年、オライリー・ジャパン）143 ページを参照。]

//footnote[8][リチャード・ストールマン、BYTE誌 (1986 年) 参照。]

//footnote[9][『HURD の歴史』を参照。 http://www.gnu.org/software/hurd/history.html ]

//footnote[10][プログラミングの自由同盟プレスリリースによれば、この抗議行動は、十六進プロテスト数え唄が始めて歌われたことで著名である。『1-2-3-4、弁護士はドアから外に放り出せ / 5-6-7-8、発明しろ（innovate）、訴訟（litigate）をするな / 9-A-B-C、1-2-3 はいらないぞ / D-E-F-O、ルックアンドフィールはもうお仕舞い』 http://progfree.org/Links/prep.ai.mit.edu/demo.final.release ]

//footnote[11][Reuven Lerner, "Stallman wins $240,000 MacArthur award," MIT, The Tech (July 18, 1990). http://the-tech.mit.edu/V110/N30/rms.30n.html を参照。]

//footnote[12][マイケル・グロス、「リチャード・ストールマン。高校の不適応者、自由ソフトウェアのシンボル、マッカーサー奨学金の天才」(1999 年) を参照。]

//footnote[13][リーナス・トーバルズ、デイビッド・ダイアモンド共著「それがぼくには楽しかったから」（小学館プロダクション、2001 年）99 ページ参照。この本はおそらく、トーバルズの人生に関しては正確だが、ストールマンについてはしばしば誤ったことを言っている、たとえば、ストールマンは「すべてをオープンソースにしたがっている、」そして「他の人が GPL を使わないことに不平を言っている。」と言う。実際には、ストールマンが擁護しているのは自由ソフトウェアで、オープンソースではない。彼は、ほとんどの環境で、作者に GNU GPL を選ぶように勧めるが、全ての自由ソフトウェアを倫理的だと言っている。]

//footnote[14][1991 年には自由なものではなかったが、今日、Minix は自由ソフトウェアである。]

//footnote[15][タネンバウムは、彼の本、『オペレーティング・システム設計と実装』で Minix を「オペレーティング・システム」として記述しているが、本の議論は Unix のカーネルに対応したシステムの部分のみである。「オペレーティング・システム」という用語の慣習的用法は二つあり、その一つが Unix テクノロジーで「カーネル」と呼ばれるものだ。しかし、それだけが主題における用語的混乱ではない。Minix のその部分は、マイクロカーネル・プラス・その上で走るサーバー群から成っており、GNU Hurd・プラス・Mach と同じ種類の設計だ。マイクロカーネル・プラス・サーバーは、Unix のカーネルに相当する。しかし、その本はカーネルと言うとき、マイクロカーネルにしか言及していない。Andrew Tanenbaum, Operating System Design and Implementation, 1987 を参照。]

//footnote[16][リーナス・トーバルズ、デイビッド・ダイアモンド共著「それがぼくには楽しかったから」（小学館プロダクション、2001 年）128 頁参照。]

//footnote[17][POSIXは、その後に、多くのコマンドライン機能の仕様書を含むものに拡大されたが、それは 1991 年には存在しなかった。]

//footnote[18][前掲書、138 頁]

//footnote[19][前掲書、153-155 頁]

//footnote[20][前掲書、154 頁]

//footnote[21][前掲書、152-153 頁]

//footnote[22][ロバート・ヤング「リナックス作成者リーナスとのインタビュー」リナックス・ジャーナル（1994 年 3 月 1 日号）を参照。 http://www.linuxjournal.com/article/2736 ]

//footnote[23][前掲書、99 頁]


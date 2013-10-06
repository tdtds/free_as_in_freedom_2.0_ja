= 第十章

GNU/Linux

1993 年までに、自由ソフトウェア運動は岐路に立っていた。楽観的な傾向の人々には、あらゆる兆候がハッカー文化の成功を示していた。データの暗号化やユーズネットやソフトウェアの自由について記事を提供するファンキーで新しい出版物のワイアード・マガジンが、雑誌棚から飛び立とうとしていた。かつて、ハッカーや科学研究者しか使わないスラングだったインターネットは、日常用語の仲間入りをした。クリントン大統領でさえインターネットを使っていた。かつて、趣味人のおもちゃだったパーソナル・コンピュータは、社会的地位を完全に認知されるまでに成長し、ハッカーが作ったソフトウェアにアクセスするコンピュータ・ユーザーのまったく新しい一世代を生み出した。そして、GNU プロジェクトは未だに完全に自由なソフトウェアのオペレーティング・システムという目標にたどり着ついていなかったが、すでにユーザーは、変種の GNU/Linux を走らせることができた。

どこから見ても、聞こえて来るのは良いニュースだった。少なくともそう思えた。10 年の奮闘の末、ハッカーとその価値観は、ついに一般社会で受け容れられた。人々がそこにたどり着いたのだ。

本当にそうだったのだろうか？悲観的な傾向の人々にとって、受容を示すどの兆候も、それぞれ固有のトラブルの兆候をともなっていた。たしかに、ハッカーであることは突然クールなことになったが、うとまれながら育ってきたコミュニティにとって、クールは良いことなのだろうか？たしかに、ホワイトハウスはインターネットについて全く結構なことを言い、自らのドメイン名 whitehouse.gov まで登録したが、それはまた、フロンティア時代の西部のようなインターネット文化を手なずけようとする会社、検閲の味方、法執行機関との遭遇でもあった。たしかに、パソコンは一層パワフルになったが、自社のチップを搭載したパソコンを市場の定番にしていく過程で、インテルは、今や占有的ソフトウェアのベンダーが力を振るう状況を作り出していた。Linux によって自由ソフトウェアの大義に改宗させられた新しいユーザー一人あたり、数百、いやおそらく数千人が、まず最初にマイクロソフトの Windows を起動させていた。GNU/Linux は、初歩的なグラフィカル・インターフェースを持っているだけで、それはユーザーに親切なものとは言い難かった。1993 年に、それを使えるのは専門家だけだった。グラフィカル・デスクトップを開発する GNU プロジェクトの最初の試みは失敗していた。

そして政治状況があった。ユーザー・インターフェースの著作権問題は、いまだに現実的脅威だった。まだ法廷は、その観念を拒絶していなかった。一方、アルゴリズムと機能のソフトウェア特許が、他の国々にも拡大しそうな増大する危険になっていた。

最後に、Linux そのものに興味深い性質があった。（GNU のように）設計上のバグや（BSD のように）法的紛争に縛られていなかったが、Linux の急速な進化は非常に無計画で、成功も非常に予想外だったので、このソフトウェアのコードの一番近くにいたプログラマたちでさえ、それをどう考えれば良いか分からなかった。オペレーティング・システムというよりも、それはコンピレーション・アルバムで、ハッカーのグレイテスト・ヒット・メドレーからできていた。つまり、GCC、GDB、glibc (GNU プロジェクトが新たに開発したCライブラリ)から、X (MIT のコンピュータ科学研究所で開発された Unix ベースのグラフィカル・ユーザ・インタフェース)や、BSD で開発された BIND (Berkeley Internet Naming Daemon、これによりユーザは数値表現の IP アドレスを覚えやすいインターネットドメイン名で置き換えられる)に TCP/IP まで、全部入っていた。加えて、それに Linux カーネルが入っていたが、それ自身は Minix を置き換えるものとして構想されたものだった。自分たちのオペレーティング・システムをゼロから作り上げるのではなく、トーバルズとその急速に拡大する Linux 開発チームは、この基盤に彼らの作品を差し込んだ。トーバルズ自身は、後に彼の成功の秘訣を語ったときに、これをこう言い換えた。「ぼくは元来怠け者で、本当は他人がやったことを自分の手柄にするのが好きなんだよ。」@<fn>{1}

この怠惰さは、効率性の観点からは賞賛されるべきだが、政治的な観点からはやっかいなことだった。たとえば、それはトーバルズにイデオロギー的な計画性がないことを明確に示していた。GNUの開発者たちとは違い、トーバルズは、仲間のハッカーたちに自由を与えたくて、オペレーティング・システムを作っていたわけではなかった。彼は、自分自身が遊べる何かが欲しくて作ったのだ。そうすると、正確には、この結合的システムは何なのか、どの哲学で人々は仲間になっているのか。
ストールマンが GNU 宣言で初めて表明した自由ソフトウェアの哲学の現れだったのか？それとも、同じような動機をもったユーザーなら、自宅のシステム上で組み立てられる気の利いたソフトウェア・ツールの混合物にすぎなかったのか？

1993 年の暮れまでに、Linux ユーザーのますます多くが、後者の定義に寄りかかり始め、Linux を主題に私的な変種を醸成し始めていた。彼らは、様々な GNU/Linux つまり「ディストリビューション」を開発し、ある時は無料で、ある時は価格を付けて、配布し始めた。その結果には、良く言っても、むらがあった。

「これは、レッドハットや他の商用ディストリビューション以前のことだね」と、当時、パデュー大学のコンピュータ科学の学生だったイアン・マードック（Ian Murdock）は回想する。「Unix の雑誌をパラパラめくるだけで、『Linux』を賛美する名刺大の広告が山ほど見つかるようなありさまさ。ほとんどの会社は、自分たちの[占有的な]ソース・コードをほんの少し混ぜ物にすべりこませても何も悪くないという、あやしい作戦をしていたんだ。」

Unix プログラマだったマードックは、Linux を自宅のパソコンのシステムに初めてダウンロードしてインストールしたとき、「引きさらわれた」ことを覚えている。「とにかく楽しかったんだ」と彼は言う。「それで関わりたくなった。」だが、できの悪いディストリビューションの氾濫が、彼の初めの熱意をそぐようになった。最良の関わり方は無添加版の Linux を作ることだと決めて、マードックは、自分のディストリビューションに取り込むべく、利用可能な最良の自由ソフトウェアツールのリストを作り始めた。「ぼくは、Linux の名に恥じない何かがほしかったんだ」と、マードックは言う。

「興味をかきたてよう」として、マードックは自分の考えを、ユーズネットの comp.os.linux ニュースグループなど、インターネット上に投稿した。最初の返信メールの一つは、rms@ai.mit.edu からのものだった。ハッカーであるマードックは、即座にそのアドレスが誰のものかを理解した。それは GNU プロジェクトの創設者リチャード・M・ストールマンであり、マードックが以前から「ハッカーのなかのハッカー」として知っていた人物だった。メールの一覧にそのアドレスを見て、マードックは戸惑った。いったいなぜストールマン、つまり自分のオペレーティング・システムのプロジェクトを率いている人物が、マードックの "Linux" ディストリビューションに対する不満を気にかけるのだろう？

マードックはメールを開いた。

「彼が言うには、自由ソフトウェア財団（FSF）は Linux を詳しく観察し始めていて、FSF は、ことによると Linux [原文のまま]システムでやってみることにも興味を持っている。ストールマンは、ぼくたちのゴールと彼らの哲学が、大筋で一致していると見ているようだった。」

誇張ではなく、そのメールは、ストールマン側の戦略の変化を示していた。1993 年まで、ストールマンは Linux で起きていることには、首を突っ込まないことでよしとしていた。新しいカーネルについて最初の知らせを受けたとき、ストールマンは友人に適合性のチェックを託した。ストールマンは思い出して言う、「彼の報告によると、そのソフトウェアは System V をモデルにしていました。System V は、Unix の劣化版でした。それに彼が言うには、それはポータブルじゃなかったんです。」

その友人の報告は正しかった。386 マシン上で動作するように作られていたので、Linux はその低価格なハードウェア・プラットフォームにしっかり根づいていた。だが、友人が報告しそこねたのは、市場で唯一、自由に改変できるオペレーティング・システムとして、Linux にかなり大きな利点があることだった。言い換えれば、ストールマンが次の 1 年半を、HURD 開発者からの進捗報告、かなり遅い進歩の報告に耳を傾けて過ごしている間に、トーバルズは、後に Linux と GNU を根こそぎ新しいプラットフォームに移植することになるプログラマたちを味方に引き入れたのだった。

1993 年までに GNU プロジェクトが動作するカーネルを配布できなかったことは、GNU プロジェクトと自由ソフトウェア運動全体に色々な問題を引き起こした。1993 年 3 月、雑誌ワイアードのシムソン・ガーフィンクルによる記事は、GNU プロジェクトを、多くのツールで成功したが、「泥沼にはまってしまった」と形容した。@<fn>{2} プロジェクトとその非営利随伴者である自由ソフトウェア財団内部の人々は、ガーフィンクルの記事が口にしたよりも、ムードはずっと悪かったことを覚えている。「そこに新しいオペレーティング・システムを導入するチャンスの窓が開いていることは、少なくとも、ぼくにはそのとき全く明らかでした」と、シャッセルは言う。「そして、一度その窓が閉じると、ひとびとは、ほとんど興味をなくしてしまうでしょう。実際、まさにそうなってしまいました。」@<fn>{3}

1990 年から 1993 年にかけての GNU プロジェクトの苦闘については、多くのことが言われてきた。こうした苦闘をストールマンのせいにする者もいるが、初期の GNU Emacs チームメンバーで、後にストールマンの批判者になるエリック・レイモンドは、ほとんどは組織の問題だ、と言う。「FSF は傲慢になった、」とレイモンドは言う。「目標を、製品として提供可能なオペレーティング・システムを作ることから、オペレーティング・システムを研究することに後退させたんだ。」さらに悪いことには、「彼らは、FSF の外の何かから自分たちが影響をこうむるなんて、ありっこないと思ってたんだ。」

マードックは、より寛大な見方をする。「問題の一部は、彼らはちょっと野心的すぎて、見込みのないことにお金を投入しすぎたことだと思う。」と、彼は言う。「80 年代後半から 90 年代前半まで、マイクロカーネルは、ホットな話題だった。不幸にも、それは GNU プロジェクトがカーネルの設計をはじめた頃のことだ。彼らは多くのお荷物を抱え、それを捨て去るのに多くの後戻りを必要としたんだ。」

ストールマンの反応は次のようなものだ。「レイモンドの言う感情は彼の想像力から来ていますが、Hurd の遅れの原因について彼は正しいことを一つ言っています。Hurd の開発者は、すぐに Hurd が走るようにするよりも、彼が学んだことに基づいてコードの大部分を再設計し書き直しました。それは良い設計の実践でしたが、動作するものを出来るだけ早く作るという我々の目標からすれば、正しい実践ではありませんでした。」

遅れを説明して、ストールマンは多くの問題を挙げている。ロータスとアップルの訴訟にさらに注意を払う必要があった。これに、ストールマンが三年間タイプできなくなくなった問題が重なった。その間、ストールマンはほとんどプログラミングができなかった。また、ストールマンは GNU プロジェクトの色々な部門間のコミュニケーションの悪さを挙げる。「デバッグ環境が機能するように、多くの仕事をする必要がありました。」と彼は回想する。「当時、GDB のメンテナーたちは、協力的じゃなかったんです。」彼らは、GNU システムの完成という全般的な目標よりも、既存のプラットフォームの、GDB の現在のユーザーを優先していたのだった。

でも最大の原因は、とストールマンは言う、彼や GNU プロジェクト・チームの他のメンバーが、Mach マイクロカーネルを、本格的な Unix カーネルに拡張することの難しさを過小評価していたことだった。「大丈夫、マシンとやりとりをする［Machの］部分はデバッグ済だ、とぼくは思ったんです。」とストールマンは、2000 年のスピーチで HURD チームのトラブルを回想しながら、言う。「有利なスタートが切れているから、早く終れるに違いない。しかし、それどころか、こういう非同期なマルチスレッドのプログラムをデバッグするのは、本当に大変だということが分かったんですね。タイミングバグがあって、それがファイルを上書きしてしまう。楽しむどころじゃない。結局、テストバージョンを作るのに何年もかかってしまいました。」@<fn>{4}

そのうち、GNU と Linux の組み合わせがますます成功していることが、GNU プロジェクトは HURD を待つべきじゃなくて、すでに出発した列車に乗るべきだということを明白にした。その上、GNU/Linux を取り巻くコミュニティには弱点があった。確かに、Linux は GPL でライセンスされていたが、マードック自身が注意していたように、GNU/Linux を純粋に自由なオペレーティング・システムとして扱う欲求は全員一致からは遠かった。1993 年末に、Linux ユーザーの総人口は、1 ダースかそこらの Minix ファンから、2万人から10万人の間のどこかにまで増大していた。@<fn>{5} かつて趣味だったものが、今や、果実をもぎ取ることのできる市場になっていた。そして、開発者の中にはそれを自由ではないソフトウェアをくっつけて収穫することに異論のない者もいたのだった。ベルリンに向かって辺りを払って進んでいくソビエト軍を見たウィンストン・チャーチルのように、Linux の「勝利」を祝う時の到来に、ストールマンが複雑な感慨に襲われたことは理解できる。@<fn>{6}

パーティーに遅れてやってきたとはいえ、ストールマンはまだ強い影響力があった。FSF がマードックのソフトウェア・プロジェクトを資金的・精神的に支援することを公表した直後から、他の支援の申し出が舞い込み始めた。マードックはこの新規プロジェクトを、Debian（デビアン） -- 彼と彼の妻デボラの名前をくっつけて縮めたもの -- と名づけ、二、三週間後には最初の配布物がお目見えした。「[リチャードの支援が] Debian を一夜にして、面白そうな小プロジェクトからコミュニティーの人々が注目せずにはいられないプロジェクトに一変させた」とマードックは言う。

1994 年 １ 月、マードックは「Debian 宣言」を起草した。10 年前のストールマンの「GNU 宣言」の精神にならって書かれた宣言は、自由ソフトウェア財団と緊密に連携することの意義を説明した。マードックはこう書いている。

//quote{
これからの Debian にとって、自由ソフトウェア財団が果たす役割は極めて重要だ。彼らがそれを配布するという単純な事実により、メッセージが世界に送られるのである。それは、Linux は商業的産物ではなく全然そうあるべきでもないが、そのことが Linux に商業的競争力がないことを意味しないというメッセージである。これに同意できない人は、GNU Emacs や GCC が成功した理由を説明してほしい。これらは、商用ソフトウェアではないという事実にもかかわらず、商業市場に極めて大きな衝撃を与えたのである。Linux コミュニティー全体とその将来を犠牲にして自分が金持ちになるというような破壊的目標ではなく、Linux の将来に集中すべき時が来た。Debian の開発や配布は、この宣言でアウトラインを描いた諸問題に対する回答ではないかもしれないが、それが少なくともこうした諸問題に多くの注意を引きつけることで、それらを解決できるようになることを願っている。@<fn>{7}
//}

宣言を発表してまもなく、自由ソフトウェア財団は、最初の大きな要求を出してきた。ストールマンは、マードックがそのディストリビューションを GNU/Linux と呼んで欲しいと思った。最初、ストールマンは -- その心臓部に GNU を持つ Linux という意味で-- Lignux という用語を提案したが、その最初の反応が非常に否定的なものだったので、ストールマンはそれよりも批判の小さな GNU/Linux で行くことを納得した。

ストールマンが頭に GNU をつけさせようとするのを、遅すぎるクレジット要求だとして退ける人もいたが、それが義務的かどうかは気にするまでもない。マードックは違う見方をした。振り返ってみて、マードックは、それを GNU プロジェクトの開発者と Linux カーネルで一緒に使うために GNU プログラムを変更した人々との間で高まっていた緊張をほぐそうとしてのことだと見る。「亀裂が見え始めていて」とマードックは振り返る。「リチャードはそれを気にしたんだ。」

1990 年までに、どの GNU プログラムにも指名された担当者のメンテナーがいた。いくつかの GNU プログラムは、多くの異なるシステムで走らせることができた。そして、しばしばユーザーはそれらの他のシステムへの移植のための変更に貢献した。これらのユーザーはその一つのシステムを知っているだけのことが多く、他のシステムのためにコードをきれいに維持する方法を考えていなかった。新しいシステムをサポートする一方、読みやすいコードを維持することで、全てのシステムで信頼性を維持することができた。それには多くの変更を書き直す必要があった。担当者のメンテナーは変更に批判を加えて、ユーザーの作者に移植の書き直し部分のやり方を知らせる責任があった。一般に、ユーザーは、変更が標準ヴァージョンに統合されるようにするために、これに熱心だった。それから、担当のメンテナーはやり直された変更を編集し、それ以降のメンテナンスを引き受けた。いくつかの GNU プログラムにとって、これは、何十個の異なるシステムで何十回も繰り返されてきたことだった。

様々な GNU プログラムを Linux カーネルとともに動くように適応させたプログラマは、この共通の経路をたどった。彼らは、彼ら自身のプラットフォームだけを考えていた。しかし、将来のメンテナンスのために、担当者のメンテナーが彼らの変更をきれいに仕上げるための助力を求めた時、彼らのうちの何人かは興味を示さなかった。彼らは間違いのないようにする事、彼らが手を加えた GNU パッケージの将来のメンテナンスを楽にする事に関心はなかった。彼らは自分たちのヴァージョンのみを気にかけており、それらをフォークとして続行することに傾いていた。

ハッカーの世界では、フォークは興味深い問題だ。ハッカー倫理では、プログラマは所与のプログラムのソースコードに対して、したいことを何をしていもいいが、オリジナルの開発者がメンテナンスしている共通ヴァージョンに成果を提供するのが適切な行動と考えられている。ハッカーは、自分たちの改良をプログラムの主要なヴァージョンに注力することが、通常は実用的だし、好ましいと思うのだ。自由ソフトウェアのライセンスは、全てのハッカーにプログラムをフォークする権利を与えていて、時にそれが必要になるが、必要性や理由もなくフォークするのは、少々お粗末な行為と考えられているのである。

GNU プロジェクトのリーダーとして、ストールマンはすでに 1991 年に、ソフトウェアをフォークさせることのネガティブな影響を経験していた。ストールマンは言う、「ルーシド社（Lucid）は、GNU Emacs の改良を書くために何人か雇いました。それは GNU Emacs への貢献を意味していました。しかし、開発者たちはプロジェクトについて知らせてくれなかった。そのかわりに、そのまま幾つかの新機能を設計しました。きみの予想する通り、ぼくは彼らの決定の或るものは同意し、他のものは同意しませんでした。彼らは彼らのコード全てを統合することを求め、ぼくが半分だけ使いたいと言ったとき、彼らはその半分について適応させる作業を手伝うことをやめました。ぼくは自分でそれをしないといけませんでした。」
このフォークは並行バージョンである Lucid Emacs を生み出し、至るところに気まずい雰囲気が漂った。@<fn>{8}

今やプログラマは主な GNU パッケージの幾つかで一挙にフォークしていた。最初、フォークは性急さの産物だと考えたとストールマンは言う。Linux チームの素早く形式ばらない動きと対照的に、GNU のソースコードのメンテナーたちは、よりゆっくりしていて、プログラムの長期的な存続に影響するような変更には、より慎重だった。彼らはまた、他人のコードを厳しく批判することも恐れなかった。しかしながら、ストールマンは、Linux 開発者たちのメールを読んでいるうちに、GNU プロジェクトとその目的について認識の根本的な欠落があることに気づき始めた。

「自分を Linux ユーザーだと考えている人たちは、GNU プロジェクトを大切に思っていないことを、ぼくらは発見しました、」とストールマンは言う。「『何でそんなもの気にしなきゃいけないの？ GNU プロジェクトなんて気にしないよ。それはぼくの役に立っているし、ぼくら Linux ユーザーに都合がいいけど、どうでもいいよ。』と彼らは言う。本質的には一種の GNU システムを使っているのにほとんど気にしていない、というのは全く驚きでした。彼らは GNU のことを誰よりも気にかけないのでした。」自分たちの実践を Linux の組み合わせと呼ぶことに騙されて、彼らは彼らのシステムが Linux というよりも GNU であることを実感していなかった。

団結のために、ストールマンは担当のメンテナーに通常は変更する作者がするべき作業をすることを要請した。ほとんどのケースでこれは実現可能だったが、glibc では、そうはいかなかった。glibc とは、GNU C ライブラリの短縮語で、それは全てのプログラムがカーネルに向けて「システムコール」をするために使うパッケージだが、この場合 Linux では、Unix 風システム上のユーザープログラムは、C ライブラリを通してのみカーネルとやりとりしている。

glibc を Linux とシステムの全ての他のプログラムとの間のコミュニケーション経路として働くようにする変更は、広範囲でアドホックなもので、他のプラットフォームへのそれらの影響を考慮することなく書かれたものだった。glibc の担当メンテナーからすれば、それをきちんと書改めるのは気持ちを萎えささせる仕事だった。自由ソフトウェア財団は彼にスクラッチから再実装するために約一年間を使わせるかわりに、glibc のヴァージョン 6 を GNU/Linux の箱からそのまま働くものにした。

マードックは、Debian のソフトウェア・ディストリビューションを展開するときに、ストールマンが GNU の接頭辞を加えるように急いで主張する原因となったのはこれだったと言う。「それ以降、フォークは終息しました。でも、その時は Linux のコミュニティが自分たちを GNU コミュニティと別と見るなら、それが分裂の力になるかも知れなかったんですよ。」

Linux を GNU プロジェクトの「一種」と記述するのを、政治的貪欲と見る人もいるが、以前から自由なソフトウェアの大義に共鳴していたマードックは、ストールマンが、Debian 版を GNU/Linux と呼ぶように求めたのはリーズナブルだと思った。「名誉というよりも、団結を求めたんだ」と彼は言う。

すぐに続けて、より技術的な性格の要求があった。マードックは政治的な問題には合わせていこうとしたが、実際のソフトウェアの設計や開発モデルのことになると、もっと断固とした姿勢をとった。連帯ショーとして始まったことが、間もなく意見の相違の繰り返しになった。

「僕にも彼と一致できないところがあったんですよ、」とマードックは笑いながら言った。「正直言って、リチャードは一緒に仕事するのがとても難しいことがある人なんだ。」最も重要な不一致はデバッギングについてだった。ストールマンは、ユーザーが遭遇するかもしれない如何なるバグもすぐに調査できるように、デバッギング情報を全ての実行可能なプログラムに含めることを望んだ。マードッグは、これはシステムファイルを大きくしすぎて配布の邪魔になるだろうと考えた。どちらも考えを変えたがらなかった。

1996 年、マードックはパデュー大学を卒業すると、成長する Debian プロジェクトの手綱を手渡そうと決めた。既に彼は、管理の仕事をブルース・ペレンズに引き継いでいた。ペレンズは GPL でリリースされている Unix ユーティリティの Electric Fence の作者として有名なハッカーだ。ペレンズは、マードック同様、そのオペレーティング・システムの Unix 風の能力が明らかになるとすぐに、GNU/Linux に魅了された。マードックと同様、ペレンズはストールマンと自由ソフトウェア財団の政治的課題に、遠くからではあるが、共鳴していた。

「ストールマンが既に GNU 宣言や GNU Emacs や、GCC を携えて登場した後で、彼がインテルのコンサルタントとして働いている、という記事を読んだのを思い出します」と、1980 年代末の最初のストールマンとの接触を思い出して、ペレンズは言う。「彼に、どうすれば一方で自由なソフトウェアを提唱して、他方ではインテルのために働けるのかと尋ねる手紙を書いたんです。彼は返事をくれて『僕は自由なソフトウェアをつくるためにコンサルタントとして働いています。』と言うんですね。彼はとても丁寧で、その答えは全く道理にかなっていると思いました。」

しかし、著明な Debian 開発者の一人として、ペレンズは、マードックが設計のことでストールマンと争っていたことは残念だった。開発チームのリーダーになってすぐ、Debian は自由ソフトウェア財団と距離を置くことを指示する決定をしたとペレンズは言う。「ぼくらは、リチャードの細かい管理スタイルを望まないと決めました。」

ペレンズによれば、ストールマンはこの決定に不意をうたれたが、それを認める知恵を持っていた。「一定の冷却期間をおいて、彼は我々が真に関係を結ぶ必要があるとメッセージを送ってきました。彼は、GNU/Linux と呼ぶことを注文したが、それだけでした。これは素晴らしいと確信しました。僕は一方的にそう決めました。みんな、ほっとしました。」

時とともに、Debian は、Slackware（スラックウェア）と並ぶ、ハッカー版 GNU/Linux としての声価を高めていくことになる。Slackware は、Debian と同じく 1993 年から 1994 年にかけて立ち上げられたもう一つの人気ディストリビューションである。しかし、Slackware には自由ではないプログラムが幾つか含まれていて、Debian も、GNU との分離後に自由ではないプログラムを配布し始めた。@<fn>{9}「自由ではない」とラベルをつけて「Debian の公式的な部分ではない」と言うものの、ユーザーに提供するのは、それとなく裏書きしているようなものだった。GNUプロジェクトがこれらのポリシーに気付いたとき、Slackware も Debian も、公衆に推薦できる GNU/Linux のディストロではないことが認識されたのだった。

だが、ハッカー指向のシステムの世界の外で、GNU/Linux は商用 Unix 市場から力を集め始めていた。ノースカロライナでは、レッドハットという名前で売り出していた Unix の会社がビジネスを GNU/Linux へ方向転換しようとしていた。代表取締役の ロバート・ヤングは、かつての Linux ジャーナルの編集者で、1994 年に、リーナス・トーバルズへ質問して、カーネルを GPL の下に置いたことを後悔していないか尋ねたことがある。ヤングによれば、トーバルズの返事は、彼の GNU/Linux 観に「深遠な」衝撃を与えた。ソフトウェアの昔ながらの戦術で GNU/Linux を買い取る方法を探るのではなく、ヤングは Debian と同じアプローチつまり完全に自由なソフトウェア部品だけでできたオペレーティング・システムをつくるというアプローチをとる会社が現れたら何が起こるかについて考え始めた。シグナス・ソリューションズは、1990 年にマイケル・ティーマンとジョン・ギルモアが立ち上げた会社だが、既に品質と特注生産能力を基盤に自由ソフトウェアが売れることを実証していた。レッドハットが、GNU/Linux について同じアプローチをとったとしたらどうなるだろうか？

「西洋の科学的伝統の中で、我々は巨人の肩に乗っているのです、」とヤングは、彼以前のトーバルズやサー・アイザック・ニュートンに倣って言う。「これをビジネスの言葉で言うと、仕事を進める上で車輪を二度発明しなくていい、ということです。[GPLの]モデルの美しいところは、自分のコードをパブリック・ドメインにするところだ。@<fn>{10} 例えば、君が独立のソフトウェアベンダーで、あるアプリケーションを造ろうとしていて、モデム・ダイアラーが必要なとき、何でモデム・ダイアラーを二度発明するんでしょうか？君は、Red Hat Linux から PPP を拝借して、君のモデム・ダイアルツールの核として使うことができる。もしも、グラフィックツールが一セット必要なら、自分のグラフィックライブラリを書く必要はない。GTK をダウンロードするだけでいい。一瞬にして、既にあるものから最良のものを再利用できるようになります。そして、その瞬間から、アプリケーションベンダーである君は、ソフトウェア・マネージメントより、顧客のニーズに特化したアプリケーションを書くことに多くを注力するようになるのです。」しかしながら、ヤングは自由ソフトウェアの活動家ではなく、喜んで自由ではないプログラムをレッドハットの GNU/Linux システムに含めている。

自由ソフトウェアのビジネス上の効率性に関心を示したソフトウェア経営者はヤングだけではなかった。1996 年末までに、ほとんどの Unix の会社は目を覚まし、熟成したソースコードの匂いに鼻を動めかし始めた。Linux 部門が商業的に完全にブレークするのは、まだ一、二年先のことだが、ハッカー・コミュニティの十分近くにいた者は感じることができた。何か大きなことが起こりつつあることを。インテルの386 チップ、インターネット、そしてウェブのセットが、大波のように市場に打ち寄せていた。そして、自由ソフトウェアは、かつてないほどの大波に見えた。

イアン・マードックにとって、この波は、自由ソフトウェア運動にアイデンティティを与えることに多くの時間を費やしてきた男への感謝の贈り物であると同時に罰であるように思えた。多くの Linux ファンの例にもれず、マードックは Linux が最初にポストされたところを目撃していた。Linux は「ただの趣味」というトーバルズの最初の警告を見た。また、Minix をつくったアンドリュー・タネンバウムに対するトーバルズの「去年の春に GNU カーネルが存在していたら、僕はこのプロジェクトを開始しなかっただろう」という告白を見た。@<fn>{11} 多くの人たちと同じく、マードックは、何度も機会が浪費されたことを知っていた。彼はまた、インターネットの織物から新たな機会が浸み出てくるのを目撃することの興奮も知った。

「あの早い時期に Linux とかかわっていたのは楽しかったですね、」とマードックは回想する。「それはすべきことがあるということであり、同時に、時間をつぶせるものがあるということでした。昔の [comp.os.minix] ニュースグループでのやりとりを読み返してみると、その気持ちがわかるでしょう。これは、HURD ができるまで、僕らが遊べる何かだということでした。みんな気を揉んでいたんですよ。面白いもんですね。色んな意味で、HURD がもう少し早くできていたら、Linux は絶対現れなかったんじゃないかな。」

だが、1996 年末までに、こうした「だとしたら」の問いかけは、すでに無意味なものになった。ユーザーたちが語っていたのは、それを Linux と呼ぶか、GNU/Linux と呼ぶか、ということだった。36 ヵ月の窓は閉じられた。それは、GNU プロジェクトが HURD カーネルを公開しても、それに注目しているハードコアなハッカーコミュニティを除けば、チャンスはほとんどない、ということだった。GNU システムの最後のギャップを埋めることで、Linux は、Unix 風の自由ソフトウェアのオペレーティングシステムをつくる GNU プロジェクトの目標を達成した。しかし、大半のユーザーは何が起きたのかを認識していなかった。彼らはシステム全体を Linux と考え、リーナス・トーバルズがそのすべてを成し遂げたと考えた。彼らのほとんどは、自由ではないソフトウェアを同梱し、トーバルズを倫理的ガイドにしたディストリビューションをインストールした。彼らには、それを拒絶する道徳的理由は見えなかった。それでも、心もとない自由は、それを賞賛する人には利用可能になった。

後注

//footnote[1][ここで引用したような発言を、トーバルズは複数の機会に行っている。だが、今のところ、この引用で一番有名なのは、エリック・レイモンドのエッセー『伽藍とバザール』（1997年5月）の中のものだ。http://catb.org/esr/writings/homesteading/cathedral-bazaar/ （日本語訳： http://cruel.org/freeware/cathedral.html）]

//footnote[2][シムソン・ガーフィンケル『ストールマン失速か？』Wired（1993 年 3 月）を参照。 ]

//footnote[3][新しいオペレーティング・システムに 36 ヵ月間だけ開いていた「窓」に関するシャッセルの懸念は、GNU プロジェクトに固有の問題ではない。1990 年代の始め、自由ソフトウェア版の BSD は、BSD からの派生ソフトウェアのリリースを制限しようとする Unix システム研究所の訴訟によって、お手上げ状態になった。多くのユーザーが、BSD から分家した FreeBSD や OpenBSD は、性能面でもセキュリティ面でも GNU/Linux を凌駕していると思っているが、FreeBSD や OpenBSD のユーザー数は、GNU/Linux ユーザーの総人口に比べれば、ほんの一握りに過ぎない。 / GNU/Linux が、他の自由ソフトウェアのオペレーティング・システムに対して、相対的に成功したことの分析例としては、ニュージーランドのハッカー、リアム・グリーンウッド（Liam Greenwood）のエッセー『Linux 成功の理由』（1999 年）を参照。http://www.freebsddiary.org/linux.php ]

//footnote[4][マウイ高性能計算センターでのスピーチを参照。後日、私はメールで、「タイミングバグ」の正確な意味を尋いてみた。ストールマンによれば、「タイミングエラー」と言う方が問題を適切に要約しているとのことで、タイミングエラーがオペレーティング・システムの実行をどのように妨げるかについて、明解な技術情報を提供してくれた。 『「タイミングエラー」は非同期システムの中で発生します。非同期システムでは、並行して実行されるジョブは、理論的には任意の順序で起動可能ですが、ある特定の順序で起動されたときに問題が発生します。プログラム A が行う処理を X、プログラム B が行う処理を Y とし、X も Y も同一のデータ構造を検査して更新する短い処理だとしましょう。ほとんどの場合、コンピュータは、Y の前に X を行うか、X の前に Y を行うかで問題は起こりません。だが、稀に、たまたまスケジューラがプログラム A を実行し、処理 X の途中で、処理 Y を行うプログラム B を実行する場合があります。すると、Y は X の途中で実行されることになる。これらは同じデータ構造を更新するので、互いに影響し合うのです。例えば、X はおそらくデータ構造の検査を終っていて、変更があったことを気づかないでしょう。そこで、再現しづらいエラーが発生することになる。再現しづらいのは、偶然の要因に（スケジューラがどのプログラムをどれだけの時間実行するかを決定するときのような）左右されるからです。こうしたエラーを回避するには、X と Y が同時に実行されないことを保証するために、ロックを用いる方法があります。非同期システムを書くプログラマーは、ロックの一般的な必要性は理解しているのですが、ときどき、特定の場所やデータ構造で必要なロックを見過ごします。すると、そのプログラムにはタイミングエラーが存在することになるのです。』]

//footnote[5][GNU/Linux のユーザ人口は、せいぜい概算しか手に入らないため、こんなに範囲が広くなっている。10 万人という数字は、レッドハットの『マイルストーン』からのもの。http://www.redhat.com/about/corporate/milestones.html ]

//footnote[6][このようにウィンストン・チャーチルになぞらえたのは、ストールマン自身がチャーチルに関する次のコメントを、頼まれないのに送ってくれたときよりも前のことである。『第二次世界大戦とその勝利に必要とされた決意とは、ぼくの成長期の強烈な思い出だ。「我々は上陸地点で彼らと戦うのだ、浜辺で彼らと戦うのだ . . . 我々は絶対に降伏しない」というようなチャーチルの演説は、いつもぼくの中で鳴り響いていた。』]

//footnote[7][イアン・マードック『Debian 小史』(1994年1月6日)：付録 A、『Debian 宣言』。http://www.debian.org/doc/manuals/project-history/apA.html ]

//footnote[8][元 Lucid のプログラマーで、後に Mozilla 開発チームを率いることになる、ジェイミー・ザウィンスキー（Jamie Zawinski）のウェブサイトに、Lucid/GNU Emacs のフォークに関するドキュメントがある。タイトルは、『Lemacs/FSFmacsの分裂』。http://www.jwz.org/doc/lemacs.html ]

//footnote[9][1996 年 6 月の Debian Buzz は、その Contrib section に自由なものではない Netscape 3.01 を含んでいた。]

//footnote[10][ヤングはここで「パブリックドメイン」という用語をおおざっぱに使っている。厳密には、パブリックドメインは著作権が適用されないものである。GPL でリリースされたプログラムは、パブリックドメインではありえない。なぜなら、GPL を適用するためにそれは著作権が適用されているからだ。]

//footnote[11][これは、Linux の最初のリリースに続いて起こった、トーバルズ-タネンバウム間の大いに宣伝された「炎上」からの引用だ。移植性がなく一枚岩的なカーネルの設計を選択したことを弁護しようとして、トーバルズは、Linux の開発を始めたのは、新しい 386 PC をもっとよく知るためだったと言う。「GNU のカーネルが去年の春に出来上がっていたら、ぼくは、ぼくのプロジェクトを始めようとすらしなかっただろう。」クリス・ディボナ他『オープンソース』（O'Reilly &amp; Associates, Inc.1999 年）224 ページを参照。]


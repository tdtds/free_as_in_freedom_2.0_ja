# -*- coding: utf-8 -*-
module ReVIEW
  class HTMLBuilder
    def nonum_begin(level, label, caption)
      puts '' if level > 1
      unless caption.empty?
        if label.nil?
          puts %Q[<h#{level}><a id="hn#{level}"></a>#{compile_inline(caption)}</h#{level}>]
        else
          puts %Q[<h#{level} id="#{label}"><a id="hn#{level}"></a>#{compile_inline(caption)}</h#{level}>]
        end
      end
    end

    def inline_fn(id)
      %Q(<a href="#fn-#{id}" class="footnotemark">*#{@chapter.footnote(id).number}</a>)
    end
  end
end
